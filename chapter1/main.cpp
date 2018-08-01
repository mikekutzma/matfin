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

int main(){
	//Get data
	double S0, U, D, R;
	if (GetInputData(S0,U,D,R)==1) return 1;

	//Get risk-neutral probability
	cout << "q = " << RiskNeutralProb(U,D,R) << endl;


	//Get node data
	int n,i;
	if (GetNodeData(n,i)==1) return 1;

	// Compute stock price at node n,i
	cout << "S(n,i) = " << S(S0,U,D,n,i) << endl;

	return 0;
}