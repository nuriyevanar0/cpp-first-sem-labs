#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*	
Laboratory 5 Exercise 5
Write a program to generate two-dimentional array with random numbers and find minimum element in every row.
Print array and minimum value 
*/

int main() {
	srand (time(NULL));
//Creating Array
	int Array[3][3];
//Putting random numbers into array1
	for (int i = 0; i < 3; i++)	
	{
		for(int j = 0; j < 3; j++) 
		{
			Array[i][j] = rand() % 10;
		}
	}
//Printing Array in Console
	for (int i = 0; i < 3; i++)	
	{
		for(int j = 0; j < 3; j++) 
		{
			cout << Array[i][j] << " ";
		}
		cout << endl;
	}
//Finding minimum element in our Array
	for (int i = 0; i < 3; i++)	
	{
		int min = Array[i][0];
		for (int j = 0; j < 3; j++)
		{
			if (Array[i][j] < min)
			{
				min = Array[i][j];
			}
		}
		cout << "in row " << i <<" minimum element is "<< min << endl;	
	}
	return 0;
}
