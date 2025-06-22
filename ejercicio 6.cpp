#include <iostream>
using namespace std;

bool primo(int num){
	if(num <= 1)
	return false;
	for(int i = 2; i*i <= num; i++) {
		if(num % i == 0)
		return false;
	}
	return true;
}

int main() {
	int num;
	cout << "ingrese el numero: ";
	cin >> num;
	
	if (primo(num)) {
	cout << "es un numero primo: " << num << endl;
	} else {
	cout << "no es un numero primo: " << num << endl;
	}
	return 0;
}
