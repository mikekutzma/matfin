#include "binmodel.h"
#include <iostream>
#include <cmath>
using namespace std;

double BinModel::RiskNeutProb(){
	return (R-D)/(U-D);
}

double BinModel::S(int n, int i){
	return S0*pow(1+U,i)*pow(1+D,n-i);
}

int BinModel::GetInputData(){
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

double BinModel::GetR(){
	return R;
}