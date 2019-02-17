//=====================================================
// Jared Torp
// Friday February 8th
// Programming II Assignment #3
// Description: The Machine
//=====================================================
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// main goes here. Code that *uses* the Mortgage class
// goes in this file
int main()
{
	//all data types are strings (for now) to test for garbage input
	string stringloan; //string to test for garbage input
	float loan; //holds the loan and passes it to member functions
	string stringrate;  //string to test for garbage input
	float rate;//holds the interest rate and passes it to member functions
	string stringyears; //string to test for garbage input
	int years; //holds the number of years and passes it to member functions

	cout << "Hello! this program will calculate the monthly payment on a home mortgage!\n";
	cout << "please enter the amount, in dollars, of the loan amount: ";
	getline(cin, stringloan);
	//validation loop for both negative numbers and string
	// member function call to store loan

	cout << "please enter the amount, in dollars, of the interest rate: ";
	getline(cin, stringloan);
	//validation loop for both negative numbers and string
	// member function call to store the interest rate

	cout << "please enter the amount, in dollars, of the loan amount: ";
	getline(cin, stringloan);
	//validation loop for both negative numbers and string
	// member function call to store years

}

//START ON THE VALIDATION
//THEN CHANGE THE CLASS AND THE MORTGAGE.CPP
//THEN FINISH MAIN AND YOU GOT A PROGRAM

//======================================================
// function name: parseInt
// parameters: 
// string sval: we pass the stringyears from the user
// float& val: we pass years by reference to change it from a string to an int 
// return type: bool, this checks to see if the input is garbage or not
//======================================================
bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

//======================================================
// function name: parsefloat
// parameters: 
// string sval: we pass the stringrate or stringloan from the user
// float& val: we pass either the rate or the loan by reference to change the string to a float, 
// return type: bool, this checks to see if the input is garbage or not
//======================================================
bool parseFloat(string sval, float& val)
{
	float num;
	bool success = true;
	try
	{
		num = stof(sval);   //used stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}