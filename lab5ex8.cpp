#include <iostream>
#include <string>
using namespace std;
// Laboratory 5 EX 8
// Write a program to take two strings from user and check if they have the same first and last letters
int main() {
	string word1;
	string word2;
	
	cout << "Please write the first word: ";
	cin >> word1;
	cout << "Please write the second word: ";
	cin >> word2;
	int n = word1.length();
	int j = word2.length();
	if ((n < 2) || (j < 2)) {
		cout << "Please write the long word." << endl;
		exit(1);
	}
	cout << "Checking the first letters: " << endl;
// First Letters
	if (word1[0] == word2[0]) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}
// Last Letters
	cout << "Checking the last letters: " << endl;
	if (word1[n - 1] == word2[j - 1]) {
		cout << "Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}  
	return 0;
}
