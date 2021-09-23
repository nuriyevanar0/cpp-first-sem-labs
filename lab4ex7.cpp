#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
/*
	Laboratory 4 Ex. 7
	Generate array of random numbers. Ask user for the size of the array. Count mean of all values from the array.
*/
int main() {
	srand (time(NULL));
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int randArray[size];
	
	for(int i = 0; i < size; i++)
	{
		randArray[i] = rand()%100;  //Generate number between 0 to 100
	}
	cout<<"\nElements of the array = {";
	for(int i = 0; i < size; i++)
	{
    	cout << randArray[i] <<",";
	}
	cout << "}" << endl;
//Finding mean of all values from the array.
	int sum, mean;
	for(int i = 0; i < size; i++)
	{
		sum += randArray[i];
	}
	mean = sum / size;
	cout << "Mean: " << mean;

	return 0;
}
