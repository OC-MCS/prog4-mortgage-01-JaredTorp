// implementation file for Mortgage class
#include "Mortgage.h"
#include <cmath>


//default constructor
Mortgage::Mortgage()
{
	loan = 0;
	rate = 0;
	years = 0;
}

//constructor that sets the loan, rate, and years into the private members
Mortgage::Mortgage(float L, float R, int Y)
{
	loan = L;
	rate = R;
	years = Y;
}

//funtion to return the loan
float Mortgage::getLoan()
{
	return loan;
}

//function to return the rate
float Mortgage::getRate()
{
	return rate;
}

//function to return the years
int Mortgage::getYears()
{
	return years;
}

//function to get the term
float Mortgage::getTerm()
{
	float term; 
	term = pow(1 + (rate / 12), 12 * years); 
	return term;
}

//function to find the monthly payment
float Mortgage::getMonthlyPayment()
{
	float monthlypayment;
	monthlypayment = (loan * (rate / 12) * getTerm() / (getTerm() - 1));
	return monthlypayment;
}


//this function will find the total payment
float Mortgage::getTotalPayment()
{
	float totalpayment;
	totalpayment = (12 * getMonthlyPayment() * years); //take the 12 months of payments times the years of the loan
	return totalpayment;

}
