#include <iostream>
using namespace std;

int main() {
    int numero;
   
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "El numero debe ser mayor que cero." << endl;
        return 1;
    }

    bool esPrimo = true;

    if (numero == 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    return 0;
}

