 //ejercici 1: funcione sumas y division
#include <iostream>
using namespace std;

float suma(int num1, int num2) {
	return num1+num2;
}

float division(float num1, float num2) {
	if(num2==0){
	cout <<"no se puede dividir";
	} else
	return num1/num2;
}

int main() {
	float num1, num2;
	int opcion;
	
	cout <<"ingrese primer numero: ";
	cin >> num1;
	cout <<"ingrese segundo numero: ";
	cin >> num2;
	
	cout << "\nSeleccione la operación a realizar:" << endl;
	cout <<"1. suma"<<endl;
	cout <<"2. division"<<endl;
	cout << "ingrese la opcion: ";
	cin >> opcion;
	
	switch (opcion) {
		case 1:
				cout <<"la suma es: "<<suma(num1, num2)<<endl;
		break;
		case 2:
				cout <<"la division es: "<<division(num1, num2)<<endl;
		break;
		default:
			cout <<"opcion no valida ";
	}
}
