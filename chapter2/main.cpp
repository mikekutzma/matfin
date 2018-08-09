#include "binmodel.h"
#include "options.h"
#include <iostream>
#include <cmath>
using namespace std;


int main(){

	BinModel Model;
	if (Model.GetInputData()==1) return 1;

	Call Option1;
	if (Option1.GetInputData()==1) return 1;

	cout << "European call option price = "
		 << Option1.PriceByCRR(Model)
		 << endl << endl;

	Put Option2;
	if (Option2.GetInputData()==1) return 1;

	cout << "European put option price = "
		 << Option2.PriceByCRR(Model)
		 << endl << endl;


	return 0;
}