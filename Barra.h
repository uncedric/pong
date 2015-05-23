/*
 * File:   Barra.h
 * Author: pmoreno
 *
 * Created on May 23, 2015, 11:33 AM
 */
#ifndef BARRA_H
#define	BARRA_H

#ifdef	__cplusplus
extern "C" {
#endif

    class Barra{
    private:
    int alto;
    int ancho;
    int vida;
    float posX;
    float posY;
    float vel;
    std::string nombre;
    int ANCHO;
    int ALTO;

    public:

        Barra(int _alto, int _ancho, float _posX, float _posY,std::string _name,float _vel):alto(_alto),ancho(_ancho),posX(_posX),posY(_posY),nombre(_name),vel(_vel){
        ALTO = 50;
        ANCHO = 50;
    }

            //getters
    float getPosX() {
        return posX; }
    float getPosY() {
        return posY; }
    float getVida() {
        return vida; }
    float getAlto() {
        return alto; }
    float getAncho() {
        return ancho; }

      //comportamiento
    void mueveArriba(){
        posY += vel;
        //posY -= vel; para contexto gráfico
    }
     void mueveAbajo(){
        posY -= vel;
        //posY += vel; para contexto gráfico
    }
      void perderVida(float _fuerza){
        vida -= _fuerza; //es la fuerza con la que golpea la pelota
    }

      void checaColision(){
        if (posY + alto >= ALTO){
            mueveArriba();
        }
        if(posY - alto <= ALTO){
            mueveAbajo();
        }
    }

    void Imprime()
    {
      std::cout << nombre << std::endl;
      std::cout << "Y: " << posY << std::endl;
      std::cout << "Vida: " << vida << std::endl;
    }

    };


#ifdef	__cplusplus
}
#endif

#endif	/* BARRA_H */
