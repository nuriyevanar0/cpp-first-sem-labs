#include <iostream>
using namespace std;

int main()
{    
    float celcius;

    cout << "Celcius: ";
    cin >> celcius;

    cout << "Fahrenheit: " << (celcius * 9/5) + 32;   
    return 0;
}
