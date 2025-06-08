#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de numeros enteros positivos mayores que cero: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }

    int numero, mayor = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        while (numero <= 0) {
            cout << "El numero debe ser positivo. Ingrese nuevamente: ";
            cin >> numero;
        }

        if (numero > mayor) {
            mayor = numero;
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}

