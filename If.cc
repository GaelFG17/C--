#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    return 0;
}