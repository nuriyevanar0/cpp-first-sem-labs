#include <iostream>
using namespace std;

/*
	Laboratory 1 Ex13
	Write a program that reads from user two points in cartesian coordinates and finds midpoint between them.
*/

int main()
{
	float x1, y1;
	float x2, y2;
	
	cout << "Enter x coordinate of A: ";
	cin >> x1;
	cout << "Enter y coordinate of A: ";
	cin >> y1;
	
	cout << "Enter x coordinate of B: ";
	cin >> x2;
	cout << "Enter y coordinate of B: ";
	cin >> y2;

	cout << "Midpoint=" << "(" << (x1 + x2)/2 << "," << (y1 +y2)/2 << ")";
	
	return 0;
}
