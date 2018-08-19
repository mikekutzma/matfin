#include "pathdepoption.h"
#include <cmath>

double PathDepOption::PriceByMC(BSModel Model, long N){
	double H=0.0;
	SamplePath S(m);
	for (long i=0;i<N;i++) {
		Model.GenerateSamplePath(T,m,S);
		H = (i*H + Payoff(S))/(i+1.0);
	}
	return exp(-Model.r*T)*H;
}

double ArthmAsianCall::Payoff(SamplePath& S) {
	double avg = 0.0;
	for (int k=0;k<m;k++){
		avg = (k*avg + S[k])/(k+1.0);
	}
	if (avg<K) return 0.0;
	return avg-K;
}