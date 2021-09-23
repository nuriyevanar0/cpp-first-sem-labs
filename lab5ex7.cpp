#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
Laboratory 4 Exercise 7
Generate array of random numbers. Ask user for the size of the array. Count mean of all values from the array.
*/

int main() {
	srand (time(NULL));
	
	int size;
	cout << "Size of the Array: ";
	cin >> size;
	
	int Array[size];
//Putting random numbers into Array
	for(int i = 0; i < size; i++)
	{
		Array[i] = rand()%100;
	}
	cout<<"\nArray = ";
	for(int i = 0; i < size; i++)
	{
    	cout << Array[i] <<" ";
	}
	cout << endl;
//Finding mean of all numbers
	int all;
	for(int i = 0; i < size; i++)
	{
		all = all + Array[i];
	}
	
	cout << "mean of all numbers: " << all / size;

	return 0;
}
