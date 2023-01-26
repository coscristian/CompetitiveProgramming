#include<iostream>

using namespace std;

// Plantilla t permite todos los tipos de datos soportados en C++
// typename se usa al igual que class
// El uso importante está en las TDA'S -> Listas colas pilas vectores
template <typename t>

void imprimir(t a, t b) {
    t c = a;
    a = b; 
    b = c;
    cout << a << " " << b << "\n";
}

int main() {

    imprimir(10, 20);
    imprimir("Aquí", "Allá");
    imprimir(true, false);
    return 0;
}