#include <string>
#include <iostream>
#include "Barra.h"



class Ui
{
public:
    int contador;
    int _vida;

    void imprimeUI(){
        std::cout << "Vidas: " << _vida << std::endl;
        std::cout << "Score: " << contador << std::endl;
    }

    void imprimeMensaje(){
        if (_vida <= 0)
            std::cout << "Has perdido" << std::endl;
        if (contador == 5){
            std::cout << "has ganado" << std::endl;
        }
    }

    void actualiza(Barra* p1);

};
