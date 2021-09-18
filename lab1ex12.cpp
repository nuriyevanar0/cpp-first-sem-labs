#include <iostream>
using namespace std;

/*
	Ex. 12
	Write a program to prompt user to input V as voltage, I as electric current and calculates the electrical resistance R with formula:
	R=V/I
*/

int main()
{    
    float v;
    float i;
	float r;
	
    cout << "Please input Voltage: ";
    cin >> v;
    cout << "Please input Electric Current: ";
    cin >> i;
	r = v / i;
    cout << "Electrical Resistance is " << r;    
    return 0;
}
