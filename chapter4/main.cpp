#include "solver.h"
#include <iostream>
using namespace std;

class F1 {
public:
	double value(double x){return x*x-2;}
	double deriv(double x){return 2*x;}
} MyF1;

class F2 {
private:
	double a;
public:
	F2(double a_){a=a_;}
	double value(double x){return x*x-a;}
	double deriv(double x){return 2*x;}
} MyF2(0.4);

int main(){

	cout << Bisect(MyF1,0.0,0.0,11.0,0.00001) << endl;
	cout << Bisect(MyF2,0.0,0.0,11.0,0.00001) << endl;
	cout << NR(MyF1,0.0,0.0,0.001) << endl;
	cout << NR(MyF2,0.0,0.0,0.001) << endl;

	return 0;
}