#include <iostream>
using namespace std;

/*
	Laboratory 1 Ex 11
	Write a program that reads from user angle in radian and converts it to degrees.
*/

int main()
{    
    float radian;

    cout << "Radian: ";
    cin >> radian;

    cout << "Degree is " <<  radian * 180/3.1416 ;   
    return 0;
}
