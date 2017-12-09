//
// Created by Jhair on 8/12/2017.
//

#ifndef LISTATDA2_GRAFOFO_H
#define LISTATDA2_GRAFOFO_H
#include <iostream>
#include "listatda.h"

class Grafofo {
public:
    ListaTDA<Vertice *>vertices;
    int cant_vert=0;
    void agregar_vertice(string nom);
    void agregar_arista(string nom1, string nom2,int peso);

    Grafofo();
    friend class Vertice;
    friend class Arista;
};


#endif //LISTATDA2_GRAFOFO_H
