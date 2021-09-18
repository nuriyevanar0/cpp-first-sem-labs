#include <iostream>
#include <string>
using namespace std;
 
/*
	Laboratory 2 Ex 1
	Write a program to prompt user name of favourite game and decide what kind of game he chose. Use switch statemant, at least five cases and default case.
*/ 
 
int main () {
   string favouritegame;
   int genre;
   cout << "What is your favourite game? ";
   cin >> favouritegame;
   cout << "and What kind of game is this?\n" << "1.Action\n2.Adventure\n3.Horror\n4.Simulation\n5.Strategy" << endl;
   cin >> genre;
   

   switch (genre) {
   		case 1 :
        	 cout << "Your favourite game is " << favouritegame << ", which is Action game." << endl; 
         	break;
      	case 2 :
        	cout << "Your favourite game is " << favouritegame << ", which is Adventure game." << endl; 
    		break;
    	case 3 :
        	cout << "Your favourite game is " << favouritegame << ", which is Horror game." << endl; 
        	break;
		case 4 :
        	cout << "Your favourite game is " << favouritegame << ", which is Simulation game." << endl; 
        	break;
		case 5 :
        	cout << "Your favourite game is " << favouritegame << ", which is Strategy game." << endl; 
        	break;  
      	default :
        	cout << "Your favourite game is " << favouritegame << ", which is lovely game." << endl;
   }
   
   return 0;
}
