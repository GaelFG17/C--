#include <iostream>

int main() {
    int numero;
    std::cout << "Introduce un número entero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << numero << " es par." << std::endl;
    } else {
        std::cout << numero << " es impar." << std::endl;
    }

    return 0;
}