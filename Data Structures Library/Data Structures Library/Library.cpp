#include "Library.h"

void Library::circulateBook(string bookToCirc, Date dateOfCirc)
{
	

}

/*void Library::verifyQ()
{
	while (!employeePrioQ.empty())
	{
		cout << employeePrioQ.front()->getName() << endl;
		employeePrioQ.pop();
	}
}*/

void Library::sortEmps()
{
	
	for (int i = employeeRoster.size() - 1; i > 0; i--)
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

	for (int i = 0; i < employeeRoster.size(); i++)
	{
		employeePrioQ.push(employeeRoster[i]);
	}
}

void Library::add_book(string title)
{
	booksCirculating.push_back(title);
}

void Library::pass_on(string bookToPass, Date dateOfPass)
{

}

void Library::add_employee(string employeeName, int newWait, int newRetain)
{
	Employee* newEmp = new Employee(employeeName, newWait, newRetain);
	employeeRoster.push_back(newEmp);
}

/*void Library::output_employees()
{
	for (auto item : employeeRoster)
	{
		cout << item->getName() << endl;
	}
}*/
