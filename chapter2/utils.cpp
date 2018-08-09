#include "utils.h"
#include <iostream>
#include <cmath>
using namespace std;

double DefInt::Trapezoidal(int N){
	
	double sum = 0;
	double h = (b-a)/N;
	
	for (int i=0;i<=N;i++){
		double x = a+(i*h);
		double fx = f(x);
		if(i!=0 && i!=N){
			fx=2*fx;
		}
		sum = sum+fx;
	}
	return sum*h/2.0;

}

double X(double x){
	return x;
}

double X2(double x){
	return pow(x,2);
}