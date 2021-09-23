#include <iostream>
#include <string>

using namespace std;
/*
Laboratory 4 EX 11
Write a program to take from user two words and check if they are equal. 
*/
int main(int argc, char** argv) {
	string word1;
	string word2;
	
	cout << "Enter the first word: ";
	cin >> word1;
	cout << "Enter the second word: ";
	cin >> word2;

	if (word1 == word2) {
		cout << "True. They are equal";
	}
	else {
		cout << "False. They are not equal";
	}
	
	
	return 0;
}

