#include "binmodel.h"
#include "options.h"
#include <iostream>
#include <cmath>
using namespace std;


int main(){

	BinModel Model;

	if (Model.GetInputData()==1) return 1;

	double K;	//Strike price
	int N;	//Steps to expiry

	cout << "Enter call option data:" << endl;
	if (GetInputData(N,K)==1) return 1;

	cout << "European call option price = "
		 << PriceByCRR(Model,N,K,CallPayoff)
		 << endl << endl;

	cout << "Enter put option data:" << endl;
	if (GetInputData(N,K)==1) return 1;

	cout << "European put option price = "
		 << PriceByCRR(Model,N,K,PutPayoff)
		 << endl << endl;


	return 0;
}