#include <iostream>

using namespace std;

int main() {

    /* For */

    int list[] = { 1, 2, 3, 4, 5 };
    int limit = sizeof(list) / sizeof(list[0]);

    for(int i = 0; i < limit; i++) {

        cout << "Valores lista" << endl;
        cout << list[i] << endl;
    }

    for(int i = 0; i < limit; i++) {

        cout << "Valores lista multiplicada por 2" << endl;
        cout << list[i] * 2 << endl;
    }
}