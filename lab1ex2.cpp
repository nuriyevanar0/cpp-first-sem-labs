#include <iostream>
#include <string>
using namespace std;

int main()
{    
    string name;
    string mood;

    cout << "Hello. What is your name?: ";
    cin >> name;
    cout << "Hello " << name << " How are you?";
	cin >> mood;
	cout << "me too :)";    
    return 0;
}
