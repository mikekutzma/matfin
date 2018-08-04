#include "binmodel.h"
#include "options.h"
#include "utils.h"
#include "payoffs.h"
#include <iostream>
#include <cmath>
using namespace std;


int main(){

	double S0, U, D, R;
	if (GetInputData(S0,U,D,R)==1) return 1;

	double K;	//Strike price
	int N;	//Steps to expiry

	cout << "Enter digital call option data:" << endl;
	GetInputData(N,K);

	cout << "European digital call option price = "
		 << PriceByCRR(S0,U,D,R,N,K,DigitalCallPayoff)
		 << endl << endl;

	cout << "Enter put option data:" << endl;
	GetInputData(N,K);

	cout << "European put option price = "
		 << PriceByCRR(S0,U,D,R,N,K,PutPayoff)
		 << endl << endl;


	return 0;
}