#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float loan,rate,amount,interest,newbalance;
	int i=1;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;



	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	interest = loan*rate/100;
	newbalance = loan+interest-amount;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << loan+interest;
	if((loan+interest)-amount < 0)
	{amount = loan+interest;
	newbalance = 0;}
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newbalance;
	cout << "\n";


	while(newbalance != 0)
	{	loan = newbalance;
		interest = newbalance*rate/100;
		newbalance = loan+interest-amount;
		i++;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << loan+interest;
		if(newbalance < 0) 
		{newbalance = 0.00;
		amount = loan+interest;}
		cout << setw(13) << left << amount;
		cout << setw(13) << left << newbalance;
		cout << "\n";	

	}



	return 0;
}
