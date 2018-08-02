#ifndef options_h
#define options_h

//Inputting and diplaying option data
int GetInputData(int& N, double& K);

//Pricing European option
double PriceByCRR(double S0, double U, double D, double R,
	int N, double K);

//Computoing call payoff
double CallPayoff(double z, double K);

#endif