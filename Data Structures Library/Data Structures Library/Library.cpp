#include "Library.h"
#include "Book.h"


list<Book> booksCirculating; //a list of the books circulating
list<Book> booksArchived; //a list of the books archived

//Is passed a book to circulate and a date of circulation and calls the sortEmps function to sort the employees
//Big O: O(n^2) - because the sortEmps() function has a complexity of O(n^2) and it is being called
void Library::circulateBook(string bookToCirc, Date dateOfCirc)
{
	//set the date of circulation of the book and assign book to first employee in queue
	for (Book book : booksCirculating)  
	{

		if (book.getTitle() == bookToCirc)
		{
			book.setCircuStart(dateOfCirc);
			book.setArchived(false);
			break;
		}



	}

	


}

//Takes the title of the book, creates an instance of the Book class with the title passed to it, and adds that book to the queue of books circulating
//Big O: O(1)
void Library::add_book(string title)
{
	Book newBook(title);
	booksCirculating.push_back(newBook);
}


void Library::pass_on(string bookToPass, Date dateOfPass) //TODO
{
	for (Book book : booksCirculating)
	{
		if (book.getTitle() == bookToPass)
		{
			book.employeePrioQ.front().setRetain(dateOfPass - book.getCircuStart() + book.employeePrioQ.front().getRetain());
		}

	}


}

//Takes the employee name, new wait time, and new retain time to a new instance of the Employee class, then adds that employee instance to the employeeRoster queue
//Big O: O(1)
void Library::add_employee(string employeeName, int newWait, int newRetain)
{
	Employee newEmp(employeeName, newWait, newRetain);

	employeeRoster.push_back(newEmp);


}

//Outputs all of the employees in the employeeRoster queue
//Big O: O(n)
/*void Library::output_employees()
{
	for (auto item : employeeRoster)
	{
		cout << item->getName() << endl;
	}
}*/
