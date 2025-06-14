 //divion por resta suceciva
#include <iostream>
using namespace std;

int conciente(int a, int b) {
	int c = 0;
	while (a >= b) {
		a = a-b;
		c++;
	}
	return c;
}
