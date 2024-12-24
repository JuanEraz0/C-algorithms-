/*
Colección de datos, de diferentes tipos
*/

#include<iostream>
#include <cstring> 

using namespace std;

struct coleccion_CD
{
    /* data */

    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];

};


/*

struct coleccion_CD
{

    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
}CD1,CD2,CD3;

*/

int main(){
    coleccion_CD CD1;
    strcpy(CD1.artista, "Juan");
    strcpy(CD1.titulo, "programacion ");
    strcpy(CD1.fecha_compra, "23-06-1998");

    CD1.numCanciones = 23;
    CD1.precio=455.6;

    cout << "Artista: " << CD1.artista << endl;
    cout << "Titulo : " << CD1.titulo << endl;
    cout << "Fecha de compra: "<<CD1.fecha_compra<<endl;
    cout<<"Numero de canciones: "<<CD1.numCanciones<<endl;
    cout<<"Precio: "<<CD1.precio<<endl;

}