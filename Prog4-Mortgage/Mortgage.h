#pragma once
// header file for Mortgage class

class Mortgage
{
private:
	float loan; //holds the loan amount
	float rate; //holds the interest rate
	int years; //holds the number of years in the loan
	float getTerm();
public:
	Mortgage(); //default constructor
	Mortgage(float, float, int); //construction that sets the values passed to loan, rate, and years
	
	float getLoan(); //prototype to return the loan
	float getRate(); //prototype to return the rate
	int getYears();  //prototype to return the years
	float getmonthlypayment(); //prototype to get the monthly payment

};
