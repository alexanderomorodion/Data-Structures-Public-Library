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
	Library midContinent;
	midContinent.add_employee("Alex", 6, 3);
	midContinent.add_employee("Jyn", 6, 6);
	midContinent.add_employee("Kayla", 10, 1);
	//midContinent.output_employees();
	Date myDate;
	midContinent.circulateBook("hi", myDate);

	//midContinent.verifyQ();

	system("PAUSE");
	return 0;
}