#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
/*
	Laboratory 4 Ex. 1
	Generate array of random numbers and write a loop that finds the minimum element in the array.
*/
int main() {
	srand (time(NULL));
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int randArray[size];
	
	for(int i = 0; i < size; i++){
		randArray[i] = rand()%100;  //Generate number between 0 to 99
	}
	cout<<"\nElements of the array = {";
  
	for(int i=0;i<size;i++){
      cout<<randArray[i]<<",";
	}
	cout << "}" << endl;
//Finding Minimum	
	int min = randArray[0];
	
	for (int i = 1; i < size; i++)
	{
		if (randArray[i] < min)
		{
			min = randArray[i];
		}
	}
	cout << "Minimum value: "<< min << endl;
	
	return 0;
}
