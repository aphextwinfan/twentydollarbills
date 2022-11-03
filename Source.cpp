#include <iostream>
using namespace std;

int main() {

	//declarations
	double userAmount;
	int numOfBills;
	double billAmount = 20.0;

	//get user input
	cout << "Enter the amount given to the teller: $";
	cin >> userAmount;

	//calculation
	//numOfBills = userAmount / 20; // <-- results in a implicit conversion of a double
	numOfBills = static_cast<int>(userAmount / billAmount);
	//numOfBills = (int)(userAmount / 20.0); //c-like cast notation

	//output
	cout << "If you give me $" << userAmount 
		<< ", I'll give you " << numOfBills << " $20 bills" << endl;

	system("pause");
	return 0;
}