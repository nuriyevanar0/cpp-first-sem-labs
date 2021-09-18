#include <iostream>

using namespace std;

//Laboratory 2 Exercise 3

int main() {
	int Anumber;
	
    cout << "1, 5, 10, 50, 100, 500, 1000\n";
    cin >> Anumber;
    
    switch (Anumber) {
   		case 1 :
        	cout << "I" << endl; 
         	break;
      	case 5 :
        	cout << "V" << endl; 
    		break;
    	case 10 :
        	cout << "X" << endl; 
        	break;
		case 50 :
        	cout << "L" << endl; 
        	break;
		case 100 :
        	cout << "C" << endl; 
        	break;
		case 500 :
        	cout << "D" << endl; 
        	break; 
		case 1000 :
        	cout << "M" << endl; 
        	break;    
      	default :
        	cout << "Please try again" << endl;
   }
	return 0;
}

