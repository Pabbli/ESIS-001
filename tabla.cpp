//Crea un programa que pida al usuario un número entero y muestre su tabla de multiplicar del 1 al 10.
#include <iostream>
using namespace std;
int main () {
	int num1;
	cout <<"introduce un numero: ";
	cin >> num1;
	for (int i=1; i<=10; i++) {
		cout << num1 * i << endl;
	}
	return 0;	
} 
