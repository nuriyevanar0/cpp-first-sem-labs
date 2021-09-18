#include <iostream>
#include <cmath>
using namespace std;

/*
	Laboratory 1 Ex13
	Write a program that calculates kinetic energy from rigid bodies. Use formula: Ek=(p^2)/2m where Ek is kinetic energy, p is momentum, m is mass of the body. Read variables from user.
*/

int main()
{
	float Ek, p, m;
	
	cout << "Input Momentum= ";
	cin >> p;
	cout << "Input Mass= ";
	cin >> m;
	
	Ek=(pow(p, 2))/(2*m);
	cout << Ek; 
	
	return 0;
}
