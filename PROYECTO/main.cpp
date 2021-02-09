#include <iostream>
#include <fstream>
#include <time.h>
#include <conio.h>

#include "cliente.h"
using namespace std;

cliente checkin1;
void hotel::ci(){
    srand(time(NULL));//generar un numero aleatorio
    dato= 10 + rand ()% (120);
    checkprueba.open("checkin1.txt",ios::app);
    checkin1.setCheckin(dni1,telefono1,nombre1,apellido1,noches1, dato);

    do {
    cout << "\nIngrese DNI del cliente: ";
    cin>>dni1;
    cout << "Ingrese telefono del cliente: ";
    cin>>telefono1;
    cout << "Ingrese nombre del cliente: ";
    cin>>nombre1;
    cout << "Ingrese apellido del cliente: ";
    cin>>apellido1;
    cout << "Ingrese el numero de noches: ";
    cin>>noches1; 
    cout<< "Habitacion: "<<dato<<endl;
    cout <<"Desea agregar otro cliente: s/n";
    resp = getch();

    checkprueba<<"\t\t\t\tHOTEL SAN MARINO CHECK-IN"<<endl;
    checkprueba << dni1 << endl;
    checkprueba << telefono1 << endl;
    checkprueba << nombre1 << endl;
    checkprueba << apellido1 << endl;
    checkprueba << noches1 << endl;
    checkprueba << dato << endl;

    } while(resp == 's' || resp == 'S');

    cout<<"\nCliente Registrado";

    if (checkprueba.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    checkprueba.close();
}

void hotel::co(){
    string linea;
    string id;
    string DNI;
    char opcion;
    
    cout << "Ingrese el DNI del cliente: ";
    cin >> DNI;
    
    ifstream archivo ("checkin1.txt");
    getline(archivo,linea);
    getline(archivo,linea);
    id = linea;

    if (DNI == id){

        cout<<"Desea eliminar al cliente?"<<endl;
        cin >> opcion;
        switch (opcion)
        {
        case ('s'):
            cout<<"el cliente se ha elimiado" <<endl;
            break;
        
        case ('n'):
            cout<<"Este cliente existe" <<endl;
            break;
        
        }
    }

    else {
        cout << "el cliente no existe";
    };

}

    

void inicio(){
    
    hotel h1;
    int option;
    cout << "\t\t\t\t\tHOTEL SAN MARINO" << endl;
    cout << "1) Check-in " << endl;
    cout << "2) Check-out " << endl;
    cout << "3) Salir " << endl;
    cin>>option;

    switch (option)
    {
    case 1:
        h1.ci();
        break;

    case 2:
        h1.co();
        break;

    case 3:
        break;

    default:
        cout << "Esta opción no existe. ";
        break;
    }
}


int main()
{   
    inicio();
    return 0;
}