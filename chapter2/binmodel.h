#ifndef binmodel_h
#define binmodel_h

class BinModel {

private:
	double S0;
	double U;
	double D;
	double R;

public:
	// Computing risk-neutral probabolity
	double RiskNeutProb();

	// Computing stock price at node n,i
	double S(int n, int i);

	// Inputting, displaying, and validating model data
	int GetInputData();

	double GetR();

};

#endif