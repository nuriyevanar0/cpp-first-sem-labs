#include <iostream>
using namespace std;

int main()
{    
    float fahrenheit;

    cout << "Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Celcius: " << (fahrenheit - 32) * 5/9;    
    return 0;
}
