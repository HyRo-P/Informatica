#include <iostream>
#include <cmath>

double Result(double x) {
    double result;
    result = ((pow(x, 2) + 3 * x) / (0.5 + x)) + (((0.1 + 1) / (pow(x, 3) + x)) * 5);
    return result;
}

int main() {
    double x;
    std::cout << "Inserisci valore x: ";
    std::cin >> x;
    std::cout << "Il risultato è: " << Result(x) << std::endl;
    return 0;
}





