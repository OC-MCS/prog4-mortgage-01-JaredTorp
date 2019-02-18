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


float Mortgage::getLoan()
{
	return loan;
}

float Mortgage::getRate()
{
	return rate;
}

int Mortgage::getYears()
{
	return years;
}

float Mortgage::getTerm()
{
	float term;
	term = pow(1 + (rate / 12), 12 * years); 
	return term;
}

float Mortgage::getmonthlypayment()
{
	float monthlypayment;
	monthlypayment = (loan * (rate / 12) * getTerm() / (getTerm() - 1));
	return monthlypayment;
}



float totalPayment()
{


}
