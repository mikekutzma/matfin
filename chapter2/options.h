#ifndef options_h
#define options_h

#include "binmodel.h"

class EurOption {

private:
	//steps to inquiry
	int N;
	//pointer to payoff function
	double (*Payoff)(double z, double K);

public:
	void SetN(int N_){
		N=N_;
	}
	
	void SetPayoff(double (*Payoff_)(double z, double K)){
		Payoff=Payoff_;
	}

	//pricing european option
	double PriceByCRR(BinModel Model, double K);
};

//Computing call payoff
double CallPayoff(double z, double K);


class Call: public EurOption {

private:
	//strike price
	double K;

public:
	Call(){
		SetPayoff(CallPayoff);
	}

	double GetK(){
		return K;
	}
	int GetInputData();

};

//Computing call payoff
double PutPayoff(double z, double K);

class Put: public EurOption {

private:
	//strike price
	double K;

public:
	Put(){
		SetPayoff(PutPayoff);
	}

	double GetK(){
		return K;
	}
	int GetInputData();

};

#endif