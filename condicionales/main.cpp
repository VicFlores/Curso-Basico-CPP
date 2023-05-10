#include <iostream>

using namespace std;

int main() {

    /* If else */

    int age = 0;

    cout << "Ingresa tu edad: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "No eres mayor de edad" << endl;
    }


    /* Switch */
    int option = 0;

    cout << "Ingresa el numero de tu menu" << endl;
    cout << "1) Hamburguesa 2) Pizza 3) Lasaña" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Seleccionaste hamburguesa" << endl;
        break;

    case 2:
        cout << "Seleccionaste pizza" << endl;
        break;

    case 3:
        cout << "Seleccionaste lasaña" << endl;
        break;
    
    default:
        cout << "Seleccionaste un valor no valido" << endl;
        break;
    }
}