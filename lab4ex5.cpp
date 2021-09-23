#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
/*
	Laboratory 4 Ex. 5
	Generate array of random integer numbers. Range is 10. User desides the size of the array. Count how many 5 you have.
*/
int main() {
	srand (time(NULL));
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int randArray[size];
	
	for(int i = 0; i < size; i++)
	{
		randArray[i] = rand()%10;  //Generate number between 0 to 10
	}
	cout<<"\nElements of the array = {";
	for(int i = 0; i < size; i++)
	{
    	cout << randArray[i] <<",";
	}
	cout << "}" << endl;
//Counting how many 5 array has
	int five = 0;
	for(int i = 0; i < size; i++){
		if(randArray[i] % 5 == 0 && randArray[i] != 0)
		{
			five++;
		}
	}
	cout << "Result: " << five;

	return 0;
}
