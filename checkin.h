#include <iostream>
#include <stdlib.h>
#include <fstream>
#include  "hotel.h"
using namespace std;

class Checkin : public hotel {
    public:
        string dni;
        string telefono;
        string nombre; 
        string apellido;
        string noches;
        int habitacion;
    
        Checkin ();
        void setCheckin(string, string, string , string, string, int);
        string getDni();
        string getTelefono();
        string getNombre ();
        string getApellido ();
        string getNoches ();
        int getHabitacion();
};

    Checkin :: Checkin (){
    }

    //establecemos valores a los atribu
    void Checkin :: setCheckin (string _dni, string _telefono, string _nombre, string _apellido, string _noches, int _habitacion){
        dni = _dni;
        telefono =  _telefono;
        nombre = _nombre;
        apellido = _apellido;
        noches = _noches;
        habitacion = _habitacion;
    }

    string Checkin ::getDni(){
        return dni;
    }

    string Checkin ::getTelefono(){
        return telefono;
    }

    string Checkin :: getNombre (){
        return nombre;
    }

    string Checkin :: getApellido (){
        return apellido;
    }

    string Checkin :: getNoches (){
        return noches;
    }   

    int Checkin :: getHabitacion (){
        return habitacion;
    }