#include <iostream>
#include <cmath>
#include "utils.h"

using namespace std;


int main(){

	DefInt MyInt(0.0,2.0,sin);
	cout << "Trapezoidal: " << MyInt.Trapezoidal(1)
		 << " | Simpson: " << MyInt.Simpson(1) << endl;
	cout << "Trapezoidal: " << MyInt.Trapezoidal(2)
		 << " | Simpson: " << MyInt.Simpson(2) << endl;
	cout << "Trapezoidal: " << MyInt.Trapezoidal(10)
		 << " | Simpson: " << MyInt.Simpson(10) << endl;
	cout << "Trapezoidal: " << MyInt.Trapezoidal(100)
		 << " | Simpson: " << MyInt.Simpson(100) << endl;

	return 0;

}