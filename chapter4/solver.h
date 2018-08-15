#ifndef solver_h
#define solver_h
#include <cmath>
#include <iostream>


template<typename Function> double Bisect(Function f,double c,double L, 
	double R, double acc) {
	double m = 0.5*(R+L);
	if(f.value(L)==c) return L;
	if(f.value(R)==c) return R;
	while(fabs(f.value(m)-c)>acc){
		if( (f.value(L)-c)*(f.value(m)-c) < 0 ){
			R=m;
		} else {
			L=m;
		}
		m=0.5*(R+L);
	}
	return m;
}

template<typename Function> double NR(Function f,double c,double x0, 
	double acc) {
	if(f.value(x0)==c){return x0;}
	double x=x0+acc+1;
	double temp;
	while(fabs(x-x0)>acc){
		temp = x;
		x = x-((f.value(x)-c)/f.deriv(x));
		x0=temp;
	}
	return x;
}

#endif