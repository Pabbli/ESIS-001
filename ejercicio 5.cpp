#include <iostream>
using namespace std; 

bool sonAmigos(int a, int b) {
    int sumaA = 0, sumaB = 0;
    for (int i = 1; i < a; i++) 
        if (a % i == 0) sumaA += i;
    for (int i = 1; i < b; i++) 
        if (b % i == 0) sumaB += i;
    return (sumaA == b && sumaB == a);
}
int main() {
	int num1, num2;
	cout << "introduce el primer numero: ";
	cin >> num1;
	cout << "introduce el segundo numero: ";
	cin >> num2;
	if(sonAmigos(num1, num2)) {
	cout << "son numeros amigos: " << num1 << num2 <<endl;
	} else {
	cout << "no son numeros amigos: " << num1 << num2 <<endl;
	}
	return 0;
}
