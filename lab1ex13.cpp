#include <iostream>
using namespace std;

/*
	Laboratory 1 Ex13
	Write a program which converts currency. Chose currency and find exchange rate.
*/

int main()
{    
    int currency;
	float usd, pln, azn;
	
    cout << "1.PLN/USD" << "\n2.AZN/USD ";
    cout << "\nWhich currency do you want to use? (1,2): ";
	cin >> currency;
    
	if (currency == 1)
	{
		cout << "PLN: ";
		cin >> pln;
		cout << "USD: " << pln*0.26;			
	}
	else if (currency == 2)
	{
		cout << "AZN: ";
		cin >> azn;
		cout << "USD: " << azn*0.59;			
	}
	else 
	{
		cout << "Please just choose between PLN/USD or AZN/USD";
	}

    return 0;
}
