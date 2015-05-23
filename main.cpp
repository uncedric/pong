
#include <cstdlib>
#include <iostream>
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
    Barra* play1 = new Barra (5,3,5.0F,25.0F,"jugador 1",1.5F);
    Barra* play2 = new Barra (45,3,5.0F,25.0F,"jugador 2",1.5F);


            //game loop
    while(true){
        //bola
        bola->muevePelota();
        bola->checaColision();
        //jugador 1
        play1->checaColision();
        //jugador 2
        play2->checaColision();

        play1->Imprime();
    }

    return 0;
}
