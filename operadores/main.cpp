#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 4;

    /* Operadores aritmeticos */
    int ariResult = a + b;
    cout << ariResult << endl;

    /* Operadores logicos */
    bool logResult = a > b;
    cout << logResult << endl;

    /* Operadores asignacion */
    a += 1;
    cout << a << endl;

    /* Operadores sizeof */
    cout << sizeof(a) << endl;

    /* Conocer la cantidad de valores dentro de una lista */
    int ages[] = { 22, 40, 45, 50 };
    cout << sizeof(ages) / sizeof(ages[0]) << endl;
}