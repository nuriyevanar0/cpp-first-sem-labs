#include <iostream>
using namespace std;

/*
	Laboratory 2 Ex 6
	Write a program to check value taken from user if it is divisible by 3 and 5. Use ternary operator.
*/ 

int main()
{
	int x;
	string result;
	
	cout << "Enter a value: ";
	cin >> x;
	result = ((x % 3 == 0) && (x % 5 == 0)) ? "it is divisible by 3 and 5." : "it isn't divisible by 3 and 5.";
	cout << result;
	
	
	return 0;
}
