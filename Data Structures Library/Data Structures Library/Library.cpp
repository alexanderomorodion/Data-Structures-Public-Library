#include "Library.h"
#include "Book.h"

void Library::circulateBook(string bookToCirc, Date dateOfCirc)
{
	sortEmps();

}



void Library::add_book(string title)
{
	Book newBook(title);
	booksCirculating.push_back(newBook);
}

void Library::pass_on(string bookToPass, Date dateOfPass)
{

}

void Library::add_employee(string employeeName, int newWait, int newRetain)
{
	Employee newEmp(employeeName, newWait, newRetain);
	employeeRoster.push_back(newEmp);
}

/*void Library::output_employees()
{
	for (auto item : employeeRoster)
	{
		cout << item->getName() << endl;
	}
}*/
