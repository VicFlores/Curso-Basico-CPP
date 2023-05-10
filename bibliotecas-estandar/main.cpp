#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = { "Vic Flores" };
    cout << text << endl;
    cout << text.size() << endl;

    /* Convertir string a number */
    string number = "50";
    cout << stoi(number) << endl;

    /* Convertir string a float */
    string flot = "34.5";
    cout << stof(flot) << endl;
}