#include <iostream>
using namespace std;

int MCD(int a, int b) {
	while(b!=0) {
		int residuo = a%b;
		a=b;
		b=residuo;
	}
	return a; 
}

int main() {
	int num1, num2;
	cout <<"ingrese el primer numero: ";
	cin >> num1;
	
	cout <<"ingrese el segundo numero: ";
	cin >> num2;
	
	cout << "maximo comun divisor: "<<MCD(num1, num2)<<endl;
	cout << "minimo comun multiplo: "<<endl;
	return 0;

	
}
