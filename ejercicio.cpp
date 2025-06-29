#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

double calcularSuma(int n) {
    double suma = 0;
    for (int k = 1; k <= n; k++) {
        suma += (double)factorial(k) / (2 * k);
    }
    return suma;
}
int main() {
	int n;
	cout << "ingrese el valor de n: ";
	cin >> n;
	double resultado = calcularSuma(n);
	cout << "la suma es: " << resultado << endl;
	return 0;
}
