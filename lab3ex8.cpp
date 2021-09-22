#include <iostream>
using namespace std;

/*
	Laboratory 3 Ex8
	Write a program which generate upper triangular matrix:
	2 2 1
	0 3 2
	0 0 5
*/

int main()
{
	int mat_a_rows = 3, mat_a_cols = 3;
	int a[] = {2, 2, 1};
	int b[] = {0, 3, 2};
	int c[] = {0, 0, 5};
	
	int* matrix[] = {a, b, c};
	
	for (int i = 0; i < mat_a_rows; ++i) {
		for (int j = 0; j < mat_a_cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
		
	}
	
	return 0;
}
