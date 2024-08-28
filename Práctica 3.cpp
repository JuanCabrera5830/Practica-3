#include <iostream>

int main() {
    // Arreglo de enteros con tamaño fijo de 5 elementos
    int numeros[5] = { 10, 20, 30, 40, 50 };

    // Accediendo a los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento en la posicion " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}