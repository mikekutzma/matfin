#include <iostream>
#include <cmath>
using namespace std;

// Computing risk-neutral probability
double RiskNeutralProb(double U, double D, double R){
	return (R-D)/(U-D);
}

//Computing stock price
double S(double S0, double U, double D, int n, int i){
	return S0*pow(1+U,i)*pow(1+D,n-i);
}

//Inputting, displaying, and validating model data
int GetInputData(double& S0, double& U, double& D, double& R){
	// Entering data
	cout << "S0: "; cin >> S0;
	cout << "U:  "; cin >> U;
	cout << "D:  "; cin >> D;
	cout << "R:  "; cin >> R;
	cout << endl;

	// Validating data
	if(S0<=0 || U<=-1.0 || D<=-1.0 || R<=-1.0 || U<=D){
		cout << "Illegal data ranges" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}

	// Checking for arbitrage
	if(R>=U || R<=D){
		cout << "Arbitrage exists" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}

	cout << "Input data validated" << endl;
	cout << "No arbitrage exists" << endl << endl;

	return 0;
}

//Inputting, displaying, and validating node data
int GetNodeData(int& n, int& i){
	cout << "n: "; cin >> n;
	cout << "i: "; cin >> i;

	// Validate n,i
	if(i<0 || n<i){
		cout << "Invalide node" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}

	return 0;

}