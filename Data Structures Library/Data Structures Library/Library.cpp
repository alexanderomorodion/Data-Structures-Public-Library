#include "Library.h"

void Library::circulateBook(string bookToCirc, Date dateOfCirc)
{
	sortEmps();

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
