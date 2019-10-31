#include "Employee.h"

//Default constructor which sets the employee name to an empty string
//Big O: O(1)
Employee::Employee()
{
	name = "";
}

//Constructor which takes the user name, the new wait time, and the new retain time and sets those variables
//Big O: O(1)
Employee::Employee(string userName, int newWait, int newRetain)
{
	name = userName;
	waitTime = newWait;
	retainTime = newRetain;
}

//Takes the users name and sets it
//Big O: O(1)
void Employee::setName(string userName)
{
	name = userName;
}

//Takes the users wait time and sets it
//Big O: O(1)
void Employee::setWait(int userWait)
{
	waitTime = userWait;
}

//Takes the users retain time and sets it
//Big O: O(1)
void Employee::setRetain(int userRetain)
{
	retainTime = userRetain;
}

//Returns the users name when called
//Big O: O(1)
string Employee::getName()
{
	return name;
}

//Returns the users wait time when called
//Big O: O(1)
int Employee::getWait()
{
	return waitTime;
}

//Returns the users retain time when called
//Big O: O(1)
int Employee::getRetain()
{
	return retainTime;
}



