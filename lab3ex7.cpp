#include <iostream>
using namespace std;

/*
	Laboratory 3 Ex7
	Write a program which generate table:
	1 2 3 4 
	4 5 6 7
	2 3 4 5 
	3 4 5 6
*/

int main()
{
	int mat_a_rows = 4, mat_a_cols = 4;
	int a[] = {1, 2, 3, 4};
	int b[] = {2, 3, 4, 5};
	int c[] = {3, 4, 5, 6};
	int d[] = {4, 5, 6, 7};
	
	int* matrix[] = {a, b, c, d};
	
	for (int i = 0; i < mat_a_rows; ++i) {
		for (int j = 0; j < mat_a_cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
		
	}
	
	return 0;
}
