#include <iostream>
using namespace std;

int factorial(int num) {
	int resultado = 1;
	for (int i = 2; i <= num; i++) {
		resultado = resultado * i;
	}
	return resultado;
}
int combinatorio(int m, int n) {
	return factorial(m) / (factorial(n) * factorial(m - n));
}
int main() {
	cout << "ingrese el valor de m: ";
	cin >> m;

}
