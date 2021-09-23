#include <iostream>
#include <stdlib.h>

using namespace std;
 
//Laboratory 5 Exercise 3

int main() {
	int matrix[3][3];
	int numbers;
//Making matrix with taken numbers from user
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++) 
		{
			cout << "[" << i << "][" << j <<"]: ";
			cin >> numbers;
			matrix[i][j] = numbers;
		}
	}
//Printing matrix
	for (int i = 0; i < 3; i++)	
	{
		for(int j = 0; j < 3; j++) 
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
