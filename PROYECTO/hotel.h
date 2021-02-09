#ifndef __HOTEL_H__
#define __HOTEL_H__
#include<iostream>
#include<fstream>
using namespace std;

class hotel{
    ofstream checkprueba;
    char resp;
    string  dni1, nombre1, apellido1,telefono1,noches1;
    int dato;

    public:
        void ci();
        void co();
};

#endif
