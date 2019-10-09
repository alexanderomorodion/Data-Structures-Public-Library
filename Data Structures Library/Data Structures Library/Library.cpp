#include "Library.h"

void Library::circulateBook(string bookToCirc, Date dateOfCirc)
{
	

}

void Library::add_book(string title)
{
	booksCirculating.push_back(title);
}

void Library::pass_on(string bookToPass, Date dateOfPass)
{

}

void Library::add_employee(string employeeName)
{
	Employee* myEmp = new Employee(employeeName);
	employeeRoster.push_back(myEmp);
}

/*void Library::output_employees()
{
	for (auto item : employeeRoster)
	{
		cout << item->getName() << endl;
	}
}*/
