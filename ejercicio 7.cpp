#include <iostream>
using namespace std;

int factorial(int num) {
	int resultado = 1;
	for (int i = 1; i <= num; i++) {
		resultado = resultado * i;
	}
	return resultado;
}
int combinatorio(int m, int n) {
	return factorial(m) / (factorial(n) * factorial(m - n));
}
int main() {
	int m,n;
	cout << "ingrese el valor de m: ";
	cin >> m;
	cout << "ingrese el valor de n: ";
	cin >> n;
	
		cout << "el numero combinatoro ("<< m <<", "<< n <<") es: "  <<combinatorio(m, n)<< endl;
		return 0;
}
