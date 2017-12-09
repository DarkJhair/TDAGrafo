//
// Created by Jhair on 8/12/2017.
//

#ifndef LISTATDA2_VERTICE_H
#define LISTATDA2_VERTICE_H
#include <iostream>

#include "listatda.h"
using namespace std;

template <typename T>
class Vertice {
    string nombre;
    ListaTDA<Arista*> aristas;

    friend class Arista;
    friend class Grafo;
    Vertice(string nom){
        this->nombre=nom;
    }
};


#endif //LISTATDA2_VERTICE_H
