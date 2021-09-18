#include <iostream>
using namespace std;

int main()
{    
    float num1, num2 , num3;
    int mean;

    cout << "Number #1: ";
    cin >> num1;
    cout << "Number #2: ";
	cin >> num2;
	cout << "Number #3: ";
    cin >> num3;
	
	mean = (num1 + num2 + num3) / 3;
    cout << "mean is " << mean;

    return 0;
}
