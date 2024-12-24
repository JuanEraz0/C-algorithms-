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
    cout << "Artista: " << CD1.artista << endl;

}