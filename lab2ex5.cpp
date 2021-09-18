#include <iostream>
using namespace std;

/*
	Laboratory 2 Ex 5
	Write a C++ program to prompt user number of test points and calculates grade
*/ 

int main()
{
	int percentage;
	cout << "Enter your percentage: ";
	cin >> percentage;
	
	if((percentage <= 100) && (percentage >= 90)){
		cout << "Your grade is 5";
	}
	else if ((percentage <= 89) && (percentage >= 81)){
		cout << "Your grade is 4.5";
	}
	
	else if ((percentage <= 80) && (percentage >= 75)){
		cout << "Your grade is 4";
	}
	
	else if((percentage <= 74) && (percentage >= 68)){
		cout << "Your grade is 3.5";
	}
	
	else if((percentage <= 67) && (percentage >= 61)){
		cout << "Your grade is 3";
	}

	else{
		cout << "Hey man you need to study";
	}

	
	return 0;	
}


