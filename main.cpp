#include "BoolMatrix.h"
#include <iostream>

int main(){
	using namespace std;
	char s[4][4]  =  {"000", "000", "000", "000"};
	BoolMatrix A;
	BoolMatrix B(4,4);
	BoolMatrix C((char**)s, 4);
	cout << C;
	/*BoolMatrix D(B);
	D = C;
	D = D & B;
	D = D | B;
	D ^= B;
	B.Conj();
	~B;
	B.SetUp0(0, 1);
	B.Invert(2, 0, 0);
	B[0];
	D == B;
	D &= B;
	D != B;
	D.ShiftLeft(0, 2);
	BoolMatrix H;
	cin >> H;
	cout << H;*/
	cin.get();
	return 0;
}