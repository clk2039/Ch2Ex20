/*
File Name: Ch2Ex20.cpp
Github URL:
Programmer: Kit Miller
Date: September 2025
Requirements: Write a program to determine and report approximately how many gallons
of paint will be needed to paint two coats on a wooden fence that is 
6 feet high and 100 feet long if a gallon of paint covers 340 square feet.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int fenceHeight = 6;
	int fenceLength = 100;
	double paintCan = 340;
	double fenceArea;
	double gallonsNeeded;
	
	fenceArea = fenceHeight * fenceLength;
	gallonsNeeded = (fenceArea * 2) / paintCan;

	cout << "If a fence is " << fenceHeight << " feet high and " << fenceLength << " feet long, \n";
	cout << "and a gallon of paint covers " << paintCan << " square feet, \n";
	cout << "then you will need about " << gallonsNeeded << " gallons of paint to cover two coats on the fence.\n";
	cout << "If you need to buy whole gallons, you will need to buy " << round(gallonsNeeded) << " gallons of paint for the job.\n";

	return 0;
}
