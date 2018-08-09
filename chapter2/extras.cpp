#include <iostream>
#include <cmath>
#include "utils.h"

using namespace std;


int main(){

	DefInt MyInt(0.0,2.0,X);
	cout << MyInt.Trapezoidal(1) << endl;
	cout << MyInt.Trapezoidal(2) << endl;
	cout << MyInt.Trapezoidal(10) << endl;
	cout << MyInt.Trapezoidal(100) << endl;

	DefInt MyInt2(0.0,2.0,X2);
	cout << MyInt2.Trapezoidal(1) << endl;
	cout << MyInt2.Trapezoidal(2) << endl;
	cout << MyInt2.Trapezoidal(10) << endl;
	cout << MyInt2.Trapezoidal(100) << endl;

	DefInt MyInt3(0.0,2.0,sin);
	cout << MyInt3.Trapezoidal(1) << endl;
	cout << MyInt3.Trapezoidal(2) << endl;
	cout << MyInt3.Trapezoidal(10) << endl;
	cout << MyInt3.Trapezoidal(100) << endl;

	return 0;

}