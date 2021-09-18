#include <iostream>
using namespace std;

/*
Laboratory 2 Exercise 2
Write a program to prompt user number of weekday and change for written name. Use switch statement.
*/

int main()
{
	int weekday;
    cout << "1)Monday, 2)Tuesday, 3)Wednesday, 4)Thursday, 5)Friday, 6)Saturday, 7)Sunday" << endl;
    cin >> weekday;
    
    switch (weekday) {
   		case 1 :
        	cout << "Monday" << endl; 
         	break;
      	case 2 :
        	cout << "Tuesday" << endl; 
    		break;
    	case 3 :
        	cout << "Wednesday" << endl; 
        	break;
		case 4 :
        	cout << "Thursday" << endl; 
        	break;
		case 5 :
        	cout << "Friday" << endl; 
        	break;
		case 6 :
        	cout << "Saturday" << endl; 
        	break; 
		case 7 :
        	cout << "Sunday" << endl; 
        	break;    
      	default :
        	cout << "Please input a proper value " << endl;
   }
	return 0;
}
