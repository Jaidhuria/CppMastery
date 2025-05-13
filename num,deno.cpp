#include <iostream>
#include <string>
using namespace std;

int Quotient(int numerator, int denominator);

// Exception class
class DivByZero {};

int main() {
    int numer;  // Numerator
    int denom;  // Denominator

    // Read in numerator and denominator
    while (cin >> numer >> denom) {
        try {
            cout << "Their quotient: " << Quotient(numer, denom) << endl;
        }
        catch (DivByZero) { // Exception handler
            cout << "Denominator can't be 0" << endl;
        }
    }

    return 0;
}

int Quotient(int numerator, int denominator) {
    if (denominator == 0)
        throw DivByZero();
    return numerator / denominator;
}
