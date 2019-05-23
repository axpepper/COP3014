/****SAMPLE PROGRAM HEADER*******************************************************
Alex Pepper	        Total Points:  10
Due Date:  5/22/2013
Course:  C0P3014
Assignment:  Assignment 1
Professor: Dr. Lofton Bullard

Description:
Calculates and returns, with formatted output:
the net cost of a call (net_cost), the tax on a call (call_tax) and
the total cost of the call (total_cost).
Program accepts, via user input, a cell phone number (cell_num), the number of
relay stations(relays), and the length in minutes of the call (call_length).

*************************************************************/
#include <iostream> //standard library for i/o
#include <string> // always include this when you use the string class
#include <iomanip> //used to format output

using namespace std;
/**
 * prompt user for inputs via cout
 * Get user inputs from cin
 * calculates tax_rate, call_tax, total_cost and net_cost
 * outputs results to user
 * prompts user to run tool again
 *
 * returns 0
 */
int main()
{
	string user_response = "y", cell_number;
	double tax_rate, net_cost, total_cost, call_tax;
	int relays, call_length;

	cout.setf(ios::fixed);  //Global cout formatting for offset
	cout.setf(ios::showpoint);
	cout.precision(2);

	while (user_response == "y" || user_response == "Y") 
	{
	    cout << " Please input a cell number:\n";
	    cin >> cell_number;
	    cout << " Please input the number of relays:\n";
	    cin >> relays;
	    cout << " Please input the call length:\n";
	    cin >> call_length;	
	     
		if (0<=relays && relays<=5){
			tax_rate = .01;
		}
		else if (6<= relays && relays<=11){
			tax_rate = .03;
		}
		else if (12<= relays && relays<=20){
			tax_rate = .05;
		}
		else if (21<= relays && relays<=50){
			tax_rate = .08;
		}
		else{
			tax_rate = .12;
		}
	    
	    net_cost = (relays/50.0 * 0.40 * call_length);
	    call_tax = net_cost * tax_rate;
	    total_cost = net_cost + call_tax;
				
	    cout << "======================================\n";
	    cout << "Cell Phone"<< setw(25) << cell_number << endl; 
	    cout << "Number of Relay Stations" << setw(25) << relays << endl; 
	    cout << "Minutes Used" << setw(25) << call_length << endl; 
	    cout << "Net Cost" << setw(25) << "$" << net_cost << endl; 
	    cout << "Tax Rate" << setw(25) << tax_rate << endl; 
	    cout << "Call Tax" << setw(25) << "$" << call_tax << endl; 
	    cout << "Total Cost of Call" << setw(25)<<"$" << total_cost << endl; 

           
	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}

	return  0;
}





