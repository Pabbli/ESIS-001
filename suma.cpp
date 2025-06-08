//Escribe un programa en C++ que solicite al usuario ingresar dos números enteros y muestre en pantalla la suma de ambos.
#include <iostream>
using namespace std;
int main() {
	float num1, num2, suma;
	cout <<"ingresa el primer numero: ";
	cin >> num1;
	cout <<"ingresa el segundo numero: ";
	cin >> num2;
	
	suma = num1+num2;
	cout <<"la suma es: "<< suma << endl;
	
	return 0;
}
