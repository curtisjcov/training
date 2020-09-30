#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{
	int trial_num = 7;
	
	for (int i = 0; i<trial_num; i++)
	{
		stringstream name_i;
		name_i << "params_" << i << ".dat";
	        ifstream input;
	        input.open( name_i.str().cstr() );
		string l;
		double del_t;
		double time_end;
	        if (input.is_open())
	        {
	                while ( getline(input,l))
			{
				stringstream(l) >> del_t >> time_end;
			}
	        }
	
		double xi = 1;
		double x = xi;
			
		stringstream name_o;
		name_o << "output_" <<  i << ".dat";	
		str_o << name_o.str()
		
		ofstream output;
		output.open ( name_o.str().cstr() );
		for (double j=0; i<time_end+del_t; j+=del_t)
     	 	{
        	        x= x*(1-3*del_t);
			output << j << ' ' << x << '\n';
        	}
		output.close();
	}
}	
