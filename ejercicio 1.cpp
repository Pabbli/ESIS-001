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
	cin >> num1;
	cin >> num2;
	cout <<"la suma es: "<<suma(num1, num2)<<endl;
	cout <<"la division es: "<<division(num1, num2)<<endl;
}
