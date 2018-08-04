#ifndef payoff_h
#define payoffs_h

//Standard Call
double CallPayoff(double z, double K);

//Standard Put
double PutPayoff(double z, double K);

//Digital Call
double DigitalCallPayoff(double z, double K);

//Digital Put
double DigitalPutPayoff(double z, double K);

#endif