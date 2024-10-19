#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Ingrese un texto: ";
    std::getline(std::cin, input);
    std::cout << "El texto ingresado es: " << input << std::endl;
    return 0;
}