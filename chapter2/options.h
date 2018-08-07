#ifndef options_h
#define options_h

#include "binmodel.h"

//Inputting and diplaying option data
int GetInputData(int& N, double& K);

//Pricing European option
double PriceByCRR(BinModel Model, int N, double K,
	double (*Payoff)(double z, double K));

//Computing call payoff
double CallPayoff(double z, double K);

//Computing call payoff
double PutPayoff(double z, double K);


#endif