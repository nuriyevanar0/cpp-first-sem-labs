#include <iostream>

using namespace std;
/*
Lab 3 Task 9 
Write a program which generate lower triangular matrix:
2 0 0
3 2 0
1 2 2
*/
int main() {
	for (int i=0; i<3; i++) {
		
		for (int j=0; j<3; j++) {
			if (i>=j) {
				cout << 1 << " ";
			}
			
			else {
				cout << 0 << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
