
#include <string>
//#include "mundo.h"


class Pelota
{

private:
    int radio;
    float posX;
    float posY;
    float velX;
    float velY;
    float fuerza;
    std::string name;
    int ANCHO;
    int ALTO;

public:
    void muevePelota(){
        posX += velX;
        posY += velY;
    }

    void checaColision(){
        if(posX + radio >= ANCHO){
            velX = -velX;
        }

        if (posX - radio <= 0){
            velX = -velX;
        }
        if(posY + radio >= ALTO){
            velY = -velY;
        }
        if(posY - radio <=0){
            velY = -velY;
        }

    }

    Pelota(int _radio, float _posX, float _posY, float _velX, float _velY, float _fuerza):
        radio(_radio), posX(_posX),posY(_posY),velX(_velX),velY(_velY),fuerza(_fuerza)
    {
        ALTO   =50;
        ANCHO = 50;
        name = "pelota";
    }

 //getters
    int getRadio(){return radio; }
    float getPosX(){return posX; }
    float getPosY(){return posY; }
    float getFuerza(){return fuerza; }

};
