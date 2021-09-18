#include <iostream>
using namespace std;

/*
	Laboratory 2 Ex 9
	Write a program to input a number and check if it is divisible by 2 or not. If it is divisible by 2 check if it is divisible by 5 and print information about it. if it is not divisible by 2 check if it is divisible by 3 and print information about it.
*/ 

int main()
{
	int x;
	string result;
	
	cout << "Enter a value: ";
	cin >> x;
	result = ((x % 2 == 0)) ? ((x % 5 == 0) ? "it is divisible by 2 and 5." : "it is divisible by 2. But it isn't divisible by 5.") : ((x % 3 == 0)) ? "It isn't divisible by 2. But it is divisible by 3" : "It isn't divisible by 2,3 ";
	
	cout << result;
	
	
	return 0;
}
