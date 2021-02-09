#ifndef __HOTEL_H__
#define __HOTEL_H__
#include<iostream>
#include<stdlib.h>//exit
#include<fstream>
using namespace std;

class hotel{
   
    ofstream checkprueba;
    
    char resp;
    string   dni1, nombre1, apellido1,numero,telefono1,noches1;
    int dato;
    public:
        void ci();
        void check_out();
};

#endif
