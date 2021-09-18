#include <iostream>
using namespace std;

/*
	Laboratory 1 Ex4
	Write a C++ program that reads from user two numbers and calculates and prints results from various operations. Use all arithmetic operators.
	Hint. In some operations we get floating point variable therefore we must cast integer values to the same floating point type as result variable.
*/

int main()
{    
    float number1;
    float number2;
    
	cout << "Please Input the first number: ";
	cin >> number1;
	cout << "Please Input the second number: ";
	cin >> number2;
    
    cout << "Addition: " << number1 + number2 << "\n";
    cout << "Subtraction: " << number1 - number2 << "\n";
    cout << "Multiplication: " << number1 * number2 << "\n";
    cout << "Division: " << number1 / number2 << "\n";
    


    return 0;
}
