//memory leak

#include <iostream>
using namespace std;

void createCheck() {
    int* ptr = new int(42); // Se crea ptr en heap (memoria dinámica)
    delete ptr; //se elimina para evitar fugas de memoria
}

int main() {
    createCheck(); // nos aseguramos que al llamar a la función, se eliminó el puntero

    return 0;
}
