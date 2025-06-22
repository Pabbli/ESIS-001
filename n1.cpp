#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }

    return true;
}

int main() {
    int numero;
    cout << "Ingresa un n�mero entero : ";
    cin >> numero;

    if (esPrimo(numero))
        cout << numero << " es un n�mero primo." << endl;
    else
        cout << numero << " no es un n�mero primo." << endl;

    return 0;
}

