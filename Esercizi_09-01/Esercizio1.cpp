#include <iostream>

int main() {
    int scelta;
    float prezzoPieno, prezzoScontato, sconto;

    std::cout << "Calcolo Percentuale di Sconto" << std::endl;
    std::cout << "1. Calcola lo sconto (%).\n" << std::endl;
    std::cout << "2. Calcola il prezzo scontato." << std::endl;
    std::cout << "3. Calcola il prezzo pieno." << std::endl;
    std::cout << "Inserisci la tua scelta (1, 2 o 3): ";
    std::cin >> scelta;

    switch (scelta) {
        case 1: 
            std::cout << "Inserisci il prezzo pieno: ";
            std::cin >> prezzoPieno;
            std::cout << "Inserisci il prezzo scontato: ";
            std::cin >> prezzoScontato;

            if (prezzoPieno != 0) {
                sconto = ((prezzoPieno - prezzoScontato) / prezzoPieno) * 100;
                std::cout << "Lo sconto e'del: " << sconto << "%" << std::endl;
            } else {
                std::cout << "Errore: il prezzo pieno non può essere 0." << std::endl;
            }
            break;

        case 2: 
            std::cout << "Inserisci il prezzo pieno: ";
            std::cin >> prezzoPieno;
            std::cout << "Inserisci lo sconto (%): ";
            std::cin >> sconto;

            prezzoScontato = prezzoPieno - (prezzoPieno * sconto / 100);
            std::cout << "Il prezzo scontato e': " << prezzoScontato << "$" << std::endl;
            break;

        case 3: 
            std::cout << "Inserisci il prezzo scontato: ";
            std::cin >> prezzoScontato;
            std::cout << "Inserisci lo sconto (%): ";
            std:: cin >> sconto;

            if (sconto != 100) {
                prezzoPieno = prezzoScontato / (1 - sconto / 100);
                std::cout << "Il prezzo pieno e' : " << prezzoPieno << std::endl;
            } else {
                std::cout << "Errore: lo sconto del 100% non permette di calcolare il prezzo pieno." << std::endl;
            }
            break;

        default:
            std::cout << "Scelta non valida." << std::endl;
    }

    return 0;
}
