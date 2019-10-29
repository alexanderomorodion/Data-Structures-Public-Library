#include "Book.h"

void Book::setTitle(string newTitle)
{
	title = newTitle;
}

void Book::setCircuStart(Date newCircuStart)
{
	circuStart = newCircuStart;
}

void Book::setCircuEnd(Date newCircuEnd)
{
	circuEnd = newCircuEnd;
}

void Book::setArchived(bool isArchived)
{
	archived = isArchived;
}

void Book::verifyQ()
{
	while (!employeePrioQ.empty())
	{
		cout << employeePrioQ.front()->getName() << endl;
		employeePrioQ.pop();
	}
}

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
			int maxPrioLeft = employeeRoster[j]->getWait() - employeeRoster[j]->getRetain();
			int maxPrioRight = employeeRoster[j + 1]->getWait() - employeeRoster[j + 1]->getRetain();

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
