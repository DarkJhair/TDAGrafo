//
// Created by Jhair on 27/11/2017.
//
#include <iostream>
#ifndef LISTATDA2_NODO_H
#define LISTATDA2_NODO_H

using namespace std;
template <typename T>
class Nodo {
public:
    Nodo *sig;
    Nodo *ant;

    T valor;

    Nodo(T);

};


#endif //LISTATDA2_NODO_H
