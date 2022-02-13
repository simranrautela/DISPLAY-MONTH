// DISPLAY MONTH.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//------------------------------------------
// Purpose : To get a month number between 1 and 12 inclusive and
//          print the month number and the corresponding month name .
//    
//-----------------------------------

#include <iostream>   // for using cin and cout
#include <string> 

using namespace std;

// Function Prototypes
void Getmonthnumber(int* month) { int m ;
void DisplayMonth(int month);

	///prompt user to enter number and read the number 
	cout << "Enter a number between 1 and 12 inclusive: ";
	cin >> m;

	                                                                       // while  number enetered is not between 
	                                                                     //between 1 and 12 
	    while (m > 1 &  m > 12     ){                                        // inclusive

		cout << " Number is not between 1 and 12 inclusive.\n";
		cout << "Try again. Enter a number 1 and 12 :  ";
		cin >> m;                                                                //read the next number
	}
	*month = m;

}

   

//*****************************************
// Definition of function Getmonthnumber.
// The parameter number  is a reference parameter to an int.
// The function asks the user to enter an integer between 1 and 12 inclusive.
// If the number entered is not within range , an error message will be
// displayed , and the user will be asked to try again until a valid number is entered .
//*****************************************************************


                          
void DisplayMonth(int month) {
	cout << "Month Number: " << month << endl;
	switch (month) {

	case 1: cout << "Month Number :" << "January"; break;
	case 2: cout << "Month Number :" << "Febuary"; break;
	case 3: cout << "Month Number :" << "March"; break;
	case 4: cout << "Month Number :" << "April"; break;
	case 5: cout << "Month Number :" << "May"; break;
	case 6: cout << "Month Number :" << "June"; break;
	case 7: cout << "Month Number :" << "July"; break;
	case 8: cout << "Month Number :" << "August"; break;
	case 9: cout << "Month Number :" << "September"; break;
	case 10: cout << "Month Number :" << "October"; break;
	case 11: cout << "Month Number :" << "November"; break;
	case 12: cout << "Month Number :" << "December"; break;

	}
	cout << "\n";
}
//-----------------------------------------
//Definition of function Displaymonth.
//The parameter number holds an integer between 1 and12 inclusive
//representing a month number.
// The Function displays the month number and the correspondingmonth name.
// ------------------------------------


int main() {
	int month = 1;
	while (true) {
		Getmonthnumber(&month);
		DisplayMonth(month);  

		//display student's information
		cout << "Simran Rautela , INFO1112 A10" << endl << endl;

	}
	
	return 0;

}

	




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
