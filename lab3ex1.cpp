#include <iostream>
#include <cstdlib>
using namespace std;

/*
	Laboratory 3 Ex1
	Write a program which generates sequence of X. The number of X take from user.
*/

int main(int argc, char** argv){
	int x;
	int random_number;
	int i;
	
	cout << "Input the number of X sequence: ";
	cin >> x;
	cout << "The random number is: \n";
	
	for(i = 0; i < x; i++ ){
		random_number = rand() % x;
		cout << random_number << endl; 
	}
	
	
	return 0;
}
