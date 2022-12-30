#include <iostream>

using namespace std;
float x, y;
int wybor;

int main() {
    cout << " Podaj 1 liczbe: ";
    cin >> x;
    cout << " Podaj 2 liczbe: ";
    cin >> y;

    cout << endl;
    cout << "MENU GLOWNE" << endl;
    cout << "_____"<< endl;
    cout << "1. Dodawaie " << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie " << endl;

    cout << " Wybierz: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            cout << " Suma= " << x + y;
            break;

        case 2:
            cout << "Różniaca : " << x - y;
            break;
        case 3:
            cout << "Mnożenie : " << x * y;
            break;
        case 4:
            cout << " Dzielenie = " << x / y;
            break;
        default:
            cout << "Nie ma takiej opcji w menu!";
    }

    return 0;
}

