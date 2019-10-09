#include "Employee.h"

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
