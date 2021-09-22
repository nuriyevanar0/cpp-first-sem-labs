#include <iostream>
using namespace std;

/*
	Laboratory 3 Ex4
	Write a program which generates pattern of O. Size of pattern take from user.
*/

int main()
{
    int rows;
	int cols;
	
    cout << "Enter number of rows/cols: ";
    cin >> rows;
    cols = rows;
	
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= cols; ++j)
        {
            cout << "O ";
        }
        cout << "\n";
    }
    return 0;
}
