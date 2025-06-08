//ejercici 1: funcione sumas y division
#include <iostream>
using namespace std;
float suma(int num1, int num2) {
	return num1+num2;
}
float division(int num1, int num2) {
	if(num2==0){
	cout <<"no se puede dividir";
	} else
	return num1/num2;
}
