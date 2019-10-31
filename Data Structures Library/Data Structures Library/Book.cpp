#include "Book.h"
#include <fstream>

queue<Employee> Book::employeePrioQ;

//Sets the title of a passed book
//Big O: O(1)
void Book::setTitle(string newTitle)
{
	title = newTitle;
}

//Takes the input of a Date object and sets the start of the circulation to that date
//Big O: O(1)
void Book::setCircuStart(Date newCircuStart)
{
	circuStart = newCircuStart;
}

//Takes the input of a Date object and sets the end of the circulation to that date
//Big O: O(1)
void Book::setCircuEnd(Date newCircuEnd)
{
	circuEnd = newCircuEnd;
}

//Takes in the bool isArchived and sets archived to that bool (either T or F)
//Big O: O(1)
void Book::setArchived(bool isArchived)
{
	archived = isArchived;
}

string Book::getTitle()
{
	return title;
}

Date Book::getCircuStart()
{
	return circuStart;
}

Date Book::getCircuEnd()
{
	return circuEnd;
}

bool Book::getArchived()
{
	return archived;
}

//Verifies the Q by looping through it and outputting the name of each item at the front, and then popping that item
//Big O: O(n)
void Book::verifyQ()
{
	while (!employeePrioQ.empty())
	{
		cout << employeePrioQ.front().getName() << endl;
		employeePrioQ.pop();
	}
}

//This function sorts the employees in order of wait time - retain time
//Big O: O(n^2) 
void Book::sortEmps()
{
	for (int i = 0; i < employeePrioQ.size(); i++) //clear queue before sorting emps
	{
		employeePrioQ.pop();
	}

	for (int i = employeeRoster.size() - 1; i > 0; i--) //sort employee roster 
	{
		for (int j = 0; j < i; j++)
		{
			int maxPrioLeft = employeeRoster[j].getWait() - employeeRoster[j].getRetain();
			int maxPrioRight = employeeRoster[j + 1].getWait() - employeeRoster[j + 1].getRetain();

			if (maxPrioLeft > maxPrioRight)
			{
				swap(employeeRoster[j], employeeRoster[j + 1]);
			}

		}

	}

	for (int i = 0; i < employeeRoster.size(); i++) //push sorted employee roster to prio q
	{
		employeePrioQ.push(employeeRoster[i]);
	}
}
