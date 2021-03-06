#include "stdafx.h"
#include <iostream>
#include <stdexcept>

using namespace std;

/*
	Types of errors:
		- logic_error
		- runtime_error
		- range_error
		- length_error
		- invalid_argument
*/

/*
	By Luis Felipe Alvarez 23 April 2018

	try
	{
		throw logic_error("Msg");

	}
	//Variable of type exception
	catch(exception &e)
	{

	}
*/
int main()
{
	double dNum, dDen, dRes = 0;
	dNum = 20.0;
	dDen = 0.0;
	try
	{
		(dDen == 0.0) ? throw logic_error("Not valid") : dRes = dNum / dDen;
	}
	catch (exception &e) 
	{
		cout << e.what();
	}
	cout << dRes;
    return 0;
}

