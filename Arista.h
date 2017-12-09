//
// Created by Jhair on 8/12/2017.
//

#ifndef LISTATDA2_ARISTA_H
#define LISTATDA2_ARISTA_H

#include <iostream>
#include "Vertice.h"

 using namespace std;

template <typename T>
class Arista {
public:
    Vertice<T> *pos_inicial;
    Vertice<T> *pos_final;
    int peso;

    Arista();

    friend class Vertice;
    friend class Grafofo;
};


#endif //LISTATDA2_ARISTA_H
