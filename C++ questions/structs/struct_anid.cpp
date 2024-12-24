/*
Estructura dentro de otra

*/
#include<iostream>
#include<string>
using namespace std;

struct info_direccion{
    string direccion;
    string cuidad ;
    string provincia ;
};

struct empleado{
    string nombre;
    struct info_direccion dir_empleado;
    double salario;

}empleados[2];


int main(){
    
    for(int i=0; i<2;i++){
        cout<< "Digite el nombre: "<<endl;
        cin>>empleados[i].nombre;
        cout<<"Digite su direccion "<<endl;
        cin>>empleados[i].dir_empleado.direccion;
        cout<<"Digita la ciudad "<<endl;
        cin>>empleados[i].dir_empleado.cuidad;
        cout<<"Digita la provincia "<<endl;
        cin>>empleados[i].dir_empleado.provincia;
        cout<<"Digita el salario "<<endl;
        cin>>empleados[i].salario;
    }

    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario : "<<empleados[i].salario<<endl;
        
    }
    
}