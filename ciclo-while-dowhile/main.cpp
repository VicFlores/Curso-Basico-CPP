#include <iostream>

using namespace std;

int main() {
   while (true) {
    char response;
    
    cout << "¿Desea terminar?" << endl;
    cin >> response;

    if (response == 'y') {
        cout << "Adiooooooos!!!" << endl;
        break;
        }
    }

    do {
        char response;
        
        cout << "¿Desea terminar?" << endl;
        cin >> response;

        if (response == 'y') {
            cout << "Adiooooooos!!!" << endl;
            break;
        }
    } while (true);
}