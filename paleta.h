#include <string>

class Paleta {
private:
  int alto;
  int ancho;
  int vida;

  float posX;
  float posY;
  float vel;

  std::string nombre;
public:
  Paleta (int _alto,int _ancho, float _posX, float _posY) : alto(_alto),ancho(_ancho),posY(_posY),posX(_posX)
  {

  }

  float getPosX(){return posX;}
  float getPosY(){return posY;}

  int getVida(){return vida;}
  int getAlto(){return alto;}
  int getAncho(){return ancho;}

  void mueveArriba()()
  {

  }

  void mueveAbajo()
  {

  }

  void perderVida()
  {

  }

};
