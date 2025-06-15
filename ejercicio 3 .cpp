#include <iostream>
using namespace std;

void fibonacci(int n) {
	int a = 0, b = 1 ,c ,suma = 0;
	if( n>=1) {
		cout << a;
		suma =suma + a;

	}
	
	if( n>=2) {
	
		cout << ", "<<b;
		suma =suma + b;
	}
	
	for(int i = 2; i < n; i++) {
		c = a + b;
		cout << ", "<<c;
		suma = suma + c;
		a = b;
		b = c; 
	}
	cout << "\nSuma de los términos: " << suma << endl;	
	}
	
	int main() {
    int n;
    cout << "Ingrese la cantidad de términos de Fibonacci: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
