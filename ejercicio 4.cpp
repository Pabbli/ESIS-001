#include <iostream>
using namespace std;

bool perfecto(int n) {
	int suma = 0;
	for(int i=1; i < n; i++) {
		if(n % i == 0)
		suma = suma+i;
	}
	return suma == n;
}

int main() {
	int num;
	cout <<"ingrese un numero: ";
	cin >>num;
	if(perfecto(num)) {
		cout <<"es un numero perfecto: " << endl;
	} else {
		cout <<"no es un numero perfecto: " << endl;
	}
	return 0;
}
