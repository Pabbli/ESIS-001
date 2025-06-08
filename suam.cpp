#include <iostream>
using namespace std;
	float suma(float a, float b) {
		return a+b;
	}
	
	float resta(float a, float b) {
		return a-b;
	}
	float dividir(float a, float b) {
		if(b==0 ) {
			cout <<"no se puede dividir ";
		return 0;
		}
		else {
			return a/b;
		}
	}
	int main(){
		float num1, num2;
		cin >> num1;
		cin >> num2;
		//cout <<suma(num1, num2)<<endl;
		cout <<resta(num1, num2);
		//cout <<dividir(num1, num2)<<endl;
	}
