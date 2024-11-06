#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    string choices[3] = {"Piedra", "Papel", "Tijera"};
    int userChoice, computerChoice;

    cout << "Elige una opción:\n";
    cout << "1. Piedra\n";
    cout << "2. Papel\n";
    cout << "3. Tijera\n";
    cout << "Tu elección: ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Opción inválida.\n";
        return 1;
    }

    computerChoice = rand() % 3 + 1;

    cout << "Tú elegiste: " << choices[userChoice - 1] << "\n";
    cout << "La computadora eligió: " << choices[computerChoice - 1] << "\n";

    if (userChoice == computerChoice) {
        cout << "Es un empate!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "Ganaste!\n";
    } else {
        cout << "Perdiste!\n";
    }

    return 0;
}