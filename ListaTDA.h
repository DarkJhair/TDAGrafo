//
// Created by Jhair on 27/11/2017.
//

#ifndef LISTATDA2_LISTATDA_H
#define LISTATDA2_LISTATDA_H


#include <iostream>
#include "ListaTDA.h"
#include "Nodo.h"

using namespace std;

template <typename T>
class ListaTDA {
private:
    Nodo <T>*inicio;
    Nodo <T>*final;

public:
    int cantidad_elementos;

    void agregar(T,int);
    void borrar_poscicion(int);
    void buscar_posicion(T valor);


};


#endif //LISTATDA2_LISTATDA_H
