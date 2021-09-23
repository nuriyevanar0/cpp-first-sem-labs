#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
	Laboratory 5 Ex 1
	Write a program to generate two-dimensional array with random numbers and multiply all numbers by 3.
	Print array before and after operation.
*/

int main() {
	srand (time(NULL));
	int array1[3][3];
	int row = 3, column = 3;
// Generating Random two-dimensional array
	for (int i = 0; i < column; i++) 
	{
		for(int j = 0; j < row; j++) 
		{
			array1[i][j] = rand() % 10;
		}
	}
	cout << "Before: \n";
//Printing Array
	for (int i = 0; i < column; i++) 
	{
		for(int j = 0; j < row; j++) 
		{
			cout << array1[i][j] << " ";
		}
		cout << "\n";
	}
//Multiplying all numbers by 3
	for (int i = 0; i < column; i++) 
	{
		for(int j = 0; j < row; j++) 
		{
			array1[i][j] = array1[i][j]*3;
		}
	}
	cout << endl <<"After: \n";
//Printing Array
	for (int i = 0; i < column; i++) 
	{
		for(int j = 0; j < row; j++) 
		{
			cout << array1[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
