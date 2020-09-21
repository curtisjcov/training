#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream input;
	input.open("params.dat")
	
	double tf  = 1;
	double delt = .00001;
	double xi = 1;
	double x = xi;
	
	for (double i=0; i<=tf; i+=delt)
	{
		x= x*(1-3*delt);
	}
	cout << x;
	ofstream output;
	output.open ("output.dat");
	output << "x = " << x << '\n';
	output.close();
	
}
