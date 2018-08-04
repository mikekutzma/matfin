#include "utils.h"
#include <iostream>
#include <cmath>
#include <array>

using namespace std;

int main(){

	double arr[] = {0.4,-2.3,3.3,0.0,2.8,10.1,-100.0};
	int arrsize = sizeof(arr)/sizeof(arr[0]);

	cout << "Unsorted: " << endl;
	for (int i=0;i<arrsize;i++){
		cout << arr[i] << endl;
	}
	
	bubblesort(arr,arrsize);

	cout << "Sorted: " << endl;
	for (int i=0;i<arrsize;i++){
		cout << arr[i] << endl;
	}

	return 0;
}