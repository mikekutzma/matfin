#ifndef options_h
#define options_h

#include "binmodel.h"
#include "binlattice.h"

class Option {

private:
	//steps to expiry
	int N;

public:
	void SetN(int N_){N=N_;}
	int GetN(){return N;}
	
	//pure virtual payoff function
	virtual double Payoff(double z)=0;

};

class EurOption: public virtual Option {
public:
	//pricing european option
	double PriceByCRR(BinModel Model);
};

class AmOption: public virtual Option {
public:
	//pricing american option
	double PriceBySnell(BinModel Model, 
		BinLattice<double>& PriceTree, BinLattice<bool>& StoppingTree);
};


class Call: public EurOption, public AmOption {

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

class Put: public EurOption, public AmOption {

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