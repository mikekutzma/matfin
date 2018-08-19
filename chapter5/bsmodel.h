#ifndef bsmodel_h
#define bsmodel_h

#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

typedef vector<double> SamplePath;

class BSModel {
public:
	double S0,r,sigma;
	BSModel(double S0_,double r_, double sigma_){
		S0=S0_;r=r_;sigma=sigma_;
		srand(time(NULL));
	}
	void GenerateSamplePath(double T, int m, SamplePath& S);
};

#endif