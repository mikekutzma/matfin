#include "options.h"
#include "binmodel.h"
#include "utils.h"
#include <iostream>
#include <cmath>
using namespace std;

int GetInputData(int& N, double& K){

	cout << "Enter steps to expiry N:  "; cin >> N;
	cout << "Enter strike price K:  "; cin >> K;
	cout << endl;

	// Validating data
	if(N<=0 || K<=0.0){
		cout << "Illegal data ranges" << endl;
		cout << "Terminating program" << endl;
		return 1;
	}

	return 0;
}

double PriceByCRR(double S0, double U, double D, double R,
	int N, double K){
	
	double q = RiskNeutralProb(U,D,R);
	//double Price[N+1];

	//for (int i=0; i<=N; i++){
	//	Price[i] = CallPayoff(S(S0,U,D,N,i),K);
	//}
	//for (int n=N-1; n>=0; n--){
	//	for (int i=0; i<=n; i++) {
	//		Price[i] = (q*Price[i+1] + (1-q)*Price[i])/(1+R);
	//	}
	//}

	//return Price[0];

	double sum = 0.0;
	for (int i=0;i<=N;i++){
		sum = sum + ((float(factorial(N))/(factorial(i)*factorial(N-i))) * 
			pow(q,i)*pow(1-q,N-i)*CallPayoff(S(S0,U,D,N,i),K));
	}
	sum = sum*(1.0/pow(1+R,N));

	return sum;

}

double CallPayoff(double z, double K){
	if(z>K) return z-K;
	return 0.0;
}

