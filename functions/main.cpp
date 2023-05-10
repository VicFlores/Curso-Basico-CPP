#include <iostream>

using namespace std;

/* Function */
int suma(int a, int b) {
    int result = a + b;

    return result;
}

int multiplicar(int a, int b) {
    int result = a * b;

    return result;
}

int resta(int a, int b = 2) {
    int result = a - b;

    return result;
}

int main() {
    cout << "Suma" << endl;
    cout << suma(5,5) << endl;
    cout << suma(4,4) << endl;

    cout << "Multiplicar" << endl;
    cout << multiplicar(2,3) << endl;
    cout << multiplicar(5,2) << endl;

    cout << "Resta" << endl;
    cout << resta(7) << endl;
    cout << resta(10) << endl;
}