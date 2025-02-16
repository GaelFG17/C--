#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(const std::string& str) {
    std::string strLimpio;
    for (char c : str) {
        if (std::isalnum(c)) {
            strLimpio += std::tolower(c);
        }
    }
    std::string strReverso = strLimpio;
    std::reverse(strReverso.begin(), strReverso.end());
    return strLimpio == strReverso;
}

int main() {
    std::string entrada;
    std::cout << "Introduce una cadena: ";
    std::getline(std::cin, entrada);

    if (esPalindromo(entrada)) {
        std::cout << "\"" << entrada << "\" es un palíndromo." << std::endl;
    } else {
        std::cout << "\"" << entrada << "\" no es un palíndromo." << std::endl;
    }

    return 0;
}