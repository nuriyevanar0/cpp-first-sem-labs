#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*	
	Laboratory 5 Ex 6
	Write a program to generate two-dimentional array with random numbers and find maximum element in the whole array.
	Print array and maximum element. 
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
//Printing Array
	for (int i = 0; i < column; i++) 
	{
		for(int j = 0; j < row; j++) 
		{
			cout << array1[i][j] << " ";
		}
		cout << "\n";
	}
//Finding maximum element in the Array
	int maxElement;
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (array1[i][j] > maxElement)
			{
				maxElement = array1[i][j];
			}
		}	
	}
	cout << "Maximum element is "<< maxElement << endl;
	
	return 0;
}
