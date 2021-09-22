#include <iostream>

using namespace std;
/*
Lab 3 Task 10
Write a program which generate diagonal matrix:
1 0 0
0 2 0
0 0 3
*/
int main() {
	int k = 0;
	for (int i=0; i<3; i++) 
	{
		for (int j=0; j<3; j++)
		{
			if (i==j) {
				cout << ++k << " ";
			}
			else {
				cout << 0 << " ";
			}
		}
		cout << endl;
	}
	
	
	
	return 0;
}
