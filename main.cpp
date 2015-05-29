
#include <cstdlib>
#include <iostream>
#include <thread>
#include "Ui.h"
#include "Pelota.h"
#include "Barra.h"

void Ui::actualiza(Barra* p1){
    _vida = p1->getVida();
}

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    Pelota* bola = new Pelota(5,25,25,2.5F,2.5F,1);
    Barra* play1 = new Barra (5,3,45.0F,25.0F,3,"jugador 1",1.5F);
    Barra* play2 = new Barra (45,3,45.0F,25.0F,3,"jugador 2",1.5F);


            //game loop
    while(true){
        //bola
        bola->muevePelota();
        bola->checaColision();
        //jugador 1
        play1->actualiza();
        //jugador 2
        play2->actualiza();

        play1->Imprime();
        play2->Imprime();

        std::this_thread::sleep_for(std::chrono::seconds(1));

        if (Pelota->getPosX + Pelota->getRadio >=play2->getPosX() + play2.getAncho() && (Pelota.getPosY() + Pelota->getRadio() == play2->getPosY()+play2.getAlto()||Pelota->getPosY()->Pelota.getRadio()==play2->getPosY) {
          /* code */
        }
    }

    return 0;
}
