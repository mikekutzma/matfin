#include "binmodel.h"
#include "options.h"
#include "binlattice.h"
#include <iostream>
using namespace std;


int main(){

	BinModel Model;
	if (Model.GetInputData()==1) return 1;
	
	Put Option;
	if (Option.GetInputData()==1) return 1;
	BinLattice<double> PriceTree;
	BinLattice<bool> StoppingTree;
	Option.PriceBySnell(Model, PriceTree, StoppingTree);	
	cout << "American put prices: " << endl << endl;
	PriceTree.Display();
	cout << "American put exercise policy: " << endl << endl;
	StoppingTree.Display();
	
	return 0;
}