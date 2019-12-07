#include "BoolMatrix.h"
#include <iostream>

int main(){
	using namespace std;
	// Initializing array of char-string
	char** m = new char* [3];
    for (int i = 0; i < 3; i++)//выделение памяти под массив
        m[i] = new char[4];
	for (int i = 0; i < 3; i++)
		m[i] = "000";
	BoolMatrix A;
	BoolMatrix B(4,5);
	cout << "Matrix B 4x5: " << endl;
	cout << B;
	BoolMatrix C(m, 3);
	cout << "Matrix C: " << endl;
	cout << C;
	BoolMatrix D(B);
	cout << "Matrix D(B): " << endl;
	cout << D;
	A = C;
	cout << "Matrix A = C: " << endl;
	cout << A;
	~B;
	cout << "~B\n" << B;
	D = D & B;
	cout << "D & ~B = " << endl;
	cout << D;
	D = D | B;
	cout << "D | ~B  = " << endl;
	cout << D;
	D ^= B;
	cout << "D ^= B" << endl;
	cout << D;
	cout << "B.SetUp0(1,1)" << endl;
	B.SetUp0(1, 1);
	cout << B;
	cout << "Disj of B rows" << endl;
	BoolVector temp(B.Disj());
	cout << temp;
	cout << "B.SetUp(1,0)" << endl;
	B.SetUp0(1, 0);
	cout << B;
	cout << "Invert 2 numbers in 1 row of B " << endl;
	B.Invert(2, 0, 0);
	cout << B;
	cout << "Second BV in B" << endl;
	cout << B[1];
	cout << "A == C " << endl;
	A == C;
	(A == C) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
	A &= C;
	cout << "A &= C" << endl;
	cout << "A != C" << endl;
	(A != C) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
	B.ShiftLeft(0, 2);
	cout << "B << 2 in 1st row" << endl;
	cout << B;
	BoolMatrix H;
	cout << "Test of input BoolMatrix H: " << endl;
	cin >> H;
	cout << H;
	cin.get();
	return 0;
}