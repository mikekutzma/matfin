#include "solver.h"
#include "eurcall.h"
#include <iostream>
using namespace std;

class Intermediary: public EurCall{
private:
	double S0,r;
public:
	Intermediary(double S0_,double r_,double T_,double K_) : EurCall(T_,K_) {
		S0=S0_;r=r_;
	}
	double value(double sigma){
		return PriceByBSFormula(S0,sigma,r);
	}
	double deriv(double sigma){
		return VegaByBSFormula(S0,sigma,r);
	}
};

int main(){

	double S0=100.0;
	double r=0.1;
	double T=1.0;
	double K=100.0;
	Intermediary Call(S0,r,T,K);

	double acc=0.001;
	double L=0.01;
	double R=1.0;
	double target=12.56;
	double guess=0.23;

	cout << "Implied vol by bisect: " 
		<< Bisect(Call,target,L,R,acc)
		<< endl;
	cout << "Implied vol by Newton-Raphson: " 
		<< NR(Call,target,guess,acc)
		<< endl;

	return 0;
}