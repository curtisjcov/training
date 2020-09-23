#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	double time_end = 1;
        double del_t = .000001;
	
	double xi = 1;
	double x = xi;
	
	ofstream output;
	output.open ("output.dat");
	 for (double i=0; i<=time_end; i+=del_t)
        {
                x= x*(1-3*del_t);
		output << i << ' ' << x << '\n';
        }
	output.close();
}	
