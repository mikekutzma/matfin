#ifndef utils_h
#define utils_h

class DefInt {

private:
	//lower and uper limits
	double a,b;

	//integrand
	double (*f)(double x);

public:
	DefInt(double a_, double b_, double (*f_)(double x)){
		a=a_;
		b=b_;
		f=f_;
	}

	double Trapezoidal(int N);

	double Simpson(int N);

};

double X(double x);

double X2(double x);

#endif