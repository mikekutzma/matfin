#include "binmodel.h"
#include <iostream>
#include <cmath>
using namespace std;


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