 //divion por resta suceciva
#include <iostream>
using namespace std;

int cociente(int a, int b) {
	int c = 0;
	while (a >= b) {
		a = a-b;
		c++;
	}
	return c;
}

int residuo(int a, int b) {
	while (a >= b) {
		a = a-b;
	}
	return a;
}

int main() {
	int a, b;
	cout <<"ingrese numero enteros: ";
	cin >> a;
	cout <<"ingrese segundo numero enteros: ";
	cin >>b;
	
	cout <<"cociente es : " <<cociente(a,b)<< endl;
	cout <<"residuo es : " <<residuo(a,b)<< endl;
	return 0;
}

