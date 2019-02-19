//=====================================================
// Jared Torp
// Friday February 8th
// Programming II Assignment #4
// Description: Mortgage
//=====================================================
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Mortgage.h" //include the header file
#include <iomanip> 
using namespace std;

bool parseInt(string sval, int& val); //prototype for parseint
bool parseFloat(string sval, float& val); //prototype for parsefloat
bool validFloatInput(string str, float& number); //prototype for checking the float inputs
bool validIntInput(string str, int& number); //prototype for checking the int input

// main goes here. Code that *uses* the Mortgage class
// goes in this file

int main()
{
	
	string strLoan; //string to test for garbage input
	float loan; //holds the loan and passes it to member functions
	string strRate;  //string to test for garbage input
	float rate;//holds the interest rate and passes it to member functions
	string strYears; //string to test for garbage input
	int years; //holds the number of years and passes it to member functions

	cout << "Hello! this program will calculate the monthly payment on a home mortgage!\n";
	cout << "please enter the amount, in dollars, of the loan amount: ";
	getline(cin, strLoan);
	
	//validation loop for both negative numbers and string
	while (!validFloatInput(strLoan, loan)) //function call to check the input
	{
		getline(cin, strLoan); //if the input if garbage, re-input 

	}


	cout << "please enter the amount, in percent, of the interest rate: ";
	getline(cin, strRate);
	
	//validation loop for both negative numbers and string
	while (!validFloatInput(strRate, rate)) //function call to check the input
	{
		getline(cin, strRate); //if the input if garbage, re-input 

	}

	rate = rate / 100; //this will convert the input to a decimal value, for the percentage
	

	cout << "please enter the number of years of the loan: "; 
	getline(cin, strYears); //users enters the years
	
	//validation loop for both negative numbers and string
	while (!validIntInput(strYears, years)) //function call to check the input
	{
		getline(cin, strYears); //if the input if garbage, re-input 
	}
	
	Mortgage temp(loan, rate, years); //creates an object of mortgage, then passes the values to set the loan, rate and years

	cout << fixed << showpoint << setprecision(2); //handles the decimals for change
	cout << "Your monthy payment for your home mortgage is $"  <<  temp.getMonthlyPayment() << endl; //cout the monthly payment, and call the member function to get the monthy payment
	cout << "Your total amount paid to the bank at the end of the loan is $"  << temp.getTotalPayment() << endl; //cout the total payment, and call the member function to get the total payment



}



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


//======================================================
// function name: validfloatinput
// parameters: 
// String str: we pass the string inputs, 
// Float& number: we pass an empty float bucket, number, by reference
// return type: bool, this checks to see if the input is garbage or not
//======================================================
bool validFloatInput(string str, float& number)
{
	bool isvalid = true;

	if (!parseFloat(str, number)) //check to see if the input is garbage 
	{
		cout << "ERROR: Invalid input, please enter a numerical value" << endl;
		isvalid = false;
	}
	else if (number < 0) //check to see if the numerical value is negative
	{
		cout << "ERROR, enter a postive number" << endl;
		isvalid = false;
	}

	return isvalid;
}

//======================================================
// function name: validintinput
// parameters: 
// String str: we pass the string inputs, 
// int& number: we pass an empty int bucket, number, by reference
// return type: bool, this checks to see if the input is garbage or not
//======================================================
bool validIntInput(string str, int& number)
{
	bool isvalid = true;

	if (!parseInt(str, number)) //check to see if the input is garbage 
	{
		cout << "ERROR: Invalid input, please enter a numerical value" << endl;
		isvalid = false;
	}
	else if (number < 0) //check to see if the numerical value is negative
	{
		cout << "Error, enter a postive number" << endl;
		isvalid = false;
	}

	return isvalid;
}