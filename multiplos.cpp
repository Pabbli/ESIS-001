#include <iostream>
using namespace std;
int main (){
	int a, b, suma=0;
	
	cout << "ingrese el valor de a: ";
	cin >> a;
	cout << "ingrese el valor de b: ";
	cin >> b;
	
	for (int i=0; i<b; i++ ) {
		int multiplos = a*i;
		cout << "multiplos: " <<i+1<< multiplos << endl;
		suma = suma + multiplos;
	}
	
	cout << "la suma de los multiplos es: " << suma << endl;
	return 0;
}
