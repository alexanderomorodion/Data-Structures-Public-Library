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
	midContinent.add_employee("Alex");
	midContinent.add_employee("Jyn");
	midContinent.add_employee("Kayla");
	//midContinent.output_employees();
	return 0;
}