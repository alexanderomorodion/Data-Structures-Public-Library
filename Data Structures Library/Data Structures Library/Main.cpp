#include <string>
#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include "Employee.h"
#include "Library.h"

using namespace std;

int main()
{
	//create an instance of the Library class
	Library midContinent;

	//add employees to the codebase
	midContinent.add_employee("Alex"); 
	midContinent.add_employee("Kayla");

	//output the employees
	//midContinent.output_employees();

	//creates an instance of the Date class and puts the book "hi" and Date instance in circulation in the Library class
	Date myDate;
	//midContinent.circulateBook("hi", myDate);

	//verifies the Queue 
	//midContinent.verifyQ();


	system("PAUSE");
	return 0;
}