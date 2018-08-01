#ifndef binmodel_h
#define binmodel_h

// Computing risk-neutral probability
double RiskNeutralProb(double U, double D, double R);

//Computing stock price
double S(double S0, double U, double D, int n, int i);

//Inputting, displaying, and validating model data
int GetInputData(double& S0, double& U, double& D, double& R);

//Inputting, displaying, and validating node data
int GetNodeData(int& n, int& i);

#endif