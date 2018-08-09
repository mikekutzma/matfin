#ifndef options_h
#define options_h

#include "binmodel.h"

class EurOption {

private:
	//steps to inquiry
	int N;

public:
	void SetN(int N_){
		N=N_;
	}
	
	//payoff function, defined to return 0
	virtual double Payoff(double z)=0;

	//pricing european option
	double PriceByCRR(BinModel Model);
};


class Call: public EurOption {

private:
	//strike price
	double K;

public:
	void SetK(double K_){
		K=K_;
	}
	int GetInputData();
	double Payoff(double z);

};

class Put: public EurOption {

private:
	//strike price
	double K;

public:
	void SetK(double K_){
		K=K_;
	}
	int GetInputData();
	double Payoff(double z);

};

#endif