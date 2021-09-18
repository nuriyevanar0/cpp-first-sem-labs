#include <iostream>
using namespace std;

int main()
{

	int a;
	
	cout << "Input a value: ";
	cin >> a;
	int b = a;
	
	cout << ++a << "\n";
	a = b;
	a++;
	cout << a << "\n";
	a = b;
	cout << --a << "\n";
	a = b;
	a--;
	cout << a << "\n";
	
	return 0;
}
