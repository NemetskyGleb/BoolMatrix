#include "BoolMatrix.h"
#include <iostream>

int main(){
	using namespace std;
	BoolMatrix B(6,6); 
	~B;
	B.SetUp0(0, 0);
	B.SetUp0(1, 0);
	cout << B;
	BoolVector A(B.Xor());
	cout << A;
	cin.get();
	return 0;
}