#include <iostream>
#include <string>
using namespace std;

/*
	Laboratory 5 Ex 9
	Write a program to take one string from user and to print the reverse string.
*/

int main() {
	string input;
	cout << "Input smth: ";
	cin >> input;
	int len = input.length();
	int n = len-1;
	for(int i = 0; i < (len/2); i++) 
	{
		swap(input[i], input[n]);
		n = n-1;		
	}
	cout << input;
	
	return 0;
}
