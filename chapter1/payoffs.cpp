using namespace std;


double CallPayoff(double z, double K){
	if(z>K) return z-K;
	return 0.0;
}

double PutPayoff(double z, double K){
	if(z<K) return K-z;
	return 0.0;
}

double DigitalCallPayoff(double z, double K){
	if(z>K) return 1.0;
	return 0;
}

double DigitalPutPayoff(double z, double K){
	if(z<K) return 1.0;
	return 0;
}