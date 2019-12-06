#include "BoolMatrix.h"
#include <iostream>

int main(){
	using namespace std;
	BoolMatrix B(6,6); 
	~B;
	B.SetUp0(0, 0);
	BoolVector x(B.Xor());
	B.ShiftLeft(0, 2);
	cout << B;
	cin.get();
	return 0;
}