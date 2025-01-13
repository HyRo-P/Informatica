#include <iostream>

int main() {
    int caramelle, amici, caramellePerTesta, rimanenti;

    std::cout << "Inserisci il numero di caramelle da dividere: ";
    std::cin >> caramelle;

    std::cout << "Inserisci il numero di amici: ";
    std::cin >> amici;

    if (amici > 0) {
        caramellePerTesta = caramelle / amici;
        rimanenti = caramelle % amici;

        std::cout << "Ogni amico riceverà " << caramellePerTesta << " caramelle.\n";
        std::cout << "Caramelle rimaste sono: " << rimanenti << "\n";
    } 
    
    else {
        std::cout << "Errore: il numero di amici deve essere maggiore di 0.\n";
    }

    return 0;
}