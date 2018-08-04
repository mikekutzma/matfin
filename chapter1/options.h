#ifndef options_h
#define options_h

//Inputting and diplaying option data
int GetInputData(int& N, double& K);

//Pricing European option
double PriceByCRR(double S0, double U, double D, double R,
	int N, double K, double (*Payoff)(double z, double K),
	int mode = 0);

//Computing call payoff
double CallPayoff(double z, double K);

//Computing call payoff
double PutPayoff(double z, double K);


#endif