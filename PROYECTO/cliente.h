#include <iostream>
#include <fstream>
#include  "hotel.h"
using namespace std;

class cliente {
    public:
        string dni;
        string telefono;
        string nombre; 
        string apellido;
        string noches;
        
        int habitacion;
    
        cliente ();
        void setCheckin(string, string, string , string, string, int);
};

    cliente :: cliente (){}

    void cliente :: setCheckin (string _dni, string _telefono, string _nombre, string _apellido, string _noches, int _habitacion){
        dni = _dni;
        telefono =  _telefono;
        nombre = _nombre;
        apellido = _apellido;
        noches = _noches;
        habitacion = _habitacion;
    }

