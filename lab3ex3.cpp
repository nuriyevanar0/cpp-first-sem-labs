#include <iostream>
#include <cstdlib>
using namespace std;

/*
	Laboratory 3 Ex3
	Write a program which types numbers divided by 5 in range from 1 to 100
*/

int main(int argc, char** argv){
	int range = 100;
	int i;
	
	cout << "Numbers divided by 5 in range from 1 to 100: \n";
	
	for(i = 0; i < range; i++ ){
		
		if(i % 5 == 0){
			cout << i << endl; 
		}
	
	}

	return 0;
}
