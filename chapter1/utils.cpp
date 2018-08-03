#include <cmath>
#include "utils.h"

using namespace std;

int factorial(int n){
	return n<=1 ? 1 : n*factorial(n-1);
}

void interchange(double& a, double& b){
	double c = a;
	a = b;
	b=c;
}

void bubblesort(double arr[], int N){
	for (int i=0;i<N-1;i++){
		for (int j=0;j<N-i;j++){
			if(arr[j]>arr[j+1]) interchange(arr[j],arr[j+1]);
		}
	}
}