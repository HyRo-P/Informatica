#include <iostream>
#include <cmath>

double calcolaQuadrato(double numero) {
    return std::pow(numero, 2);
}

double calcolaCubo(double numero) {
    return std::pow(numero, 3);
}

int main() {
    double numero, risultato;
    char scelta;

    std::cout << "Vuoi calcolare il cubo oppure il quadrato? (Inserisci 'c' per il cubo, 'q' per il quadrato): ";
    std::cin >> scelta;

    scelta = std::tolower(scelta);

    if (scelta == 'c') {
        std::cout << "Inserisci il numero di cui vuoi trovare il cubo: ";
        std::cin >> numero;
        risultato = calcolaCubo(numero);
        std::cout << "Il cubo di " << numero << " è " << risultato << std::endl;
    } else if (scelta  'q') {
        std::cout << "Inserisci il numero di cui vuoi trovare il quadrato: ";
        std::cin >> numero;
        risultato = calcolaQuadrato(numero);
        std::cout << "Il quadrato di " << numero << " è " << risultato << std::endl;
    } else {
        std::cout << "Errore: Inserisci un carattere valido ('c' per il cubo, 'q' per il quadrato)." << std::endl;
    }

    return 0;
}
