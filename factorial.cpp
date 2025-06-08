//Escribe un programa que calcule el factorial de un número entero positivo ingresado por el usuario.
#include <iostream>
using namespace std;
int main () {
	int num1, factorial;
	cout <<"introduce un numero: ";
	cin >> num1;
	
	for(int i=1; i<=num1; ++i) {
		factorial = factorial * i; 
	}
	cout <<"el factorial num es: " << factorial << endl;
	return 0;
}
