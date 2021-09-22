#include <iostream>

using namespace std;
/*
Lab 3 Task 2
Write a program which generates sequence:
3 6 9 12 , ...
User types size of sequence.
*/
int main() {
	int sequence;
	int numbers;
	
	cout << "Please enter the size of sequence: ";
	cin >> sequence;
	cout << endl;
	
	cout << "Result: ";
	for(int i = 0; i < sequence; i++)
	{
		numbers+=3;
		cout << numbers << " ";
	}
	
	
	
	return 0;
}
