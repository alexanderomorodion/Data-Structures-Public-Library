#include "Employee.h"

Employee::Employee()
{
	name = "";
	waitTime = 0;
	retainTime = 0;
}
Employee::Employee(string userName)
{
	name = userName;
	waitTime = 0;
	retainTime = 0;
}

void Employee::setName(string userName)
{
	name = userName;
}

void Employee::setWait(int userWait)
{
	waitTime = userWait;
}

void Employee::setRetain(int userRetain)
{
	retainTime = userRetain;
}

string Employee::getName()
{
	return name;
}

int Employee::getWait()
{
	return waitTime;
}

int Employee::getRetain()
{
	return retainTime;
}
