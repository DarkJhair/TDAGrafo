//
// Created by Jhair on 8/12/2017.
//

#ifndef LISTATDA2_GRAFOFO_H
#define LISTATDA2_GRAFOFO_H
#include <iostream>
#include "Vertice.h"
#include "Arista.h"

class Grafofo {
public:
    ListaTDA<Vertice*>vertices;
    int cant_vert;
    void agregar_vertice(string nom);
    void borrar_vertice(int);
    void buscar_vertice(string);
    void agregar_arista(string nom1, string nom2,int peso);

    Grafofo(){
        cant_vert=0;
    }
    friend class Vertice;
    friend class Arista;
};

void Grafofo::agregar_vertice(string nom) {
    vertices.agregar(new Vertice(nom));
    cant_vert++;
}

void Grafofo::borrar_vertice(int pos) {
    vertices.borrar_poscicion(pos);
    cant_vert--;

}





#endif //LISTATDA2_GRAFOFO_H
