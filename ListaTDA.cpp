

//
// Created by Jhair on 27/11/2017.
//
#include <iostream>
#include "ListaTDA.h"

#include "Nodo.h"
using namespace std;

template <typename T>
void ListaTDA<T>::agregar(T valor, int poscicion) {
    Nodo<T> *nuevo=new Nodo<T>(valor);
    if(poscicion < cantidad_elementos || poscicion > cantidad_elementos){
        return ;
    }else if(poscicion==0){
        nuevo->sig=inicio;
        inicio=nuevo;
        cantidad_elementos++;
        return;
    }else if(poscicion==cantidad_elementos){
        final->sig=nuevo;
        final=nuevo;
        cantidad_elementos++;
        return;
    }else{
        Nodo<T>*temp=inicio;
        for (int i = 0; i <= cantidad_elementos ; i++) {
            temp=temp->sig;
            nuevo->sig=temp->sig;
            temp->sig=nuevo;
        }
        cantidad_elementos++;
        return;
    }
}

template <typename T>
void ListaTDA<T>::buscar_posicion(T valor) {
    Nodo <T>*temp=inicio;
    for (int i = 0; i < cantidad_elementos ; i++) {
        if(temp->valor==valor){
            cout<<i<<endl;
        }
        temp=temp->sig;
    }
    return;

}

template <typename T>
void ListaTDA<T>::borrar_poscicion(int poscicion) {
    Nodo<T> *temp = inicio;

    if(poscicion < cantidad_elementos || poscicion > cantidad_elementos){
        return ;
    }else if(poscicion==0){
        inicio=temp->sig;
        inicio->ant=NULL;
        delete temp;
        cantidad_elementos--;
        return;
    }else if(poscicion==cantidad_elementos){
        temp = final;
        final = temp->ant;
        final->sig=NULL;
        delete temp;
        cantidad_elementos--;
        return;
    }else{
        for (int i = 0; i <= cantidad_elementos ; i++) {
            temp=temp->sig;
        }
        temp->ant->sig=temp->sig;
        temp->sig->ant=temp->ant;
        cantidad_elementos--;
        return;
    }

}