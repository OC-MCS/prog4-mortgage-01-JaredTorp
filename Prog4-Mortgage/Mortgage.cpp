// implementation file for Mortgage class
#include "Mortgage.h"
#include <cmath>


//======================================================
// function name: Mortgage::Mortgage
// parameters: none
// return type: none, its a constructor
//======================================================
Mortgage::Mortgage()
{
	loan = 0;
	rate = 0;
	years = 0;
}

//======================================================
// function name: Motgage::getLoan()
// parameters: none
// return type: float, we want to return the loan
//======================================================
float Mortgage::getLoan()
{
	return loan;
}

//======================================================
// function name: Motgage::getRate()
// parameters: none
// return type: float, we want to return the rate
//======================================================
float Mortgage::getRate()
{
	return rate;
}

//======================================================
// function name: Motgage::getRate()
// parameters: none
// return type: int,  we want to return the years
//======================================================
int Mortgage::getYears()
{
	return years;
}

//======================================================
// function name: Mortgage::Mortgage(float L, float R, int y)
// parameters: we pass the user input data, float l, float r, and int y
// return type: none, its a constructor
//======================================================
Mortgage::Mortgage(float L, float R, int Y)
{
	loan = L; 
	rate = R;
	years = Y;
}


//======================================================
// function name: Motgage::getTerm()
// parameters: none
// return type: float, we want to find the term
//======================================================
float Mortgage::getTerm()
{
	float term; 
	term = pow(1 + (rate / 12), 12 * years); 
	return term;
}

//======================================================
// function name: Motgage::getMonthlyPayment()
// parameters: none
// return type: float, this will calculate the term and retun it as a float
//======================================================
float Mortgage::getMonthlyPayment()
{
	float monthlypayment;
	monthlypayment = (loan * (rate / 12) * getTerm() / (getTerm() - 1));
	return monthlypayment;
}


//======================================================
// function name: Motgage::getTotalPayment()
// parameters: none
// return type: float, this calculates the total payment and returns it as float
//======================================================
float Mortgage::getTotalPayment()
{
	float totalpayment;
	totalpayment = (12 * getMonthlyPayment() * years); //take the 12 months of payments times the years of the loan
	return totalpayment;

}
