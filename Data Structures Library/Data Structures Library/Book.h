#pragma once
#include <string>
#include "Date.h"
#include "Library.h"

using namespace std;

class Book
{
	private:
		queue<Employee*> employeePrioQ; //prio queue of employees sorted by (waitTime - retainTime)
		string title; //title of the book
		Date circuStart; //date book began circulating
		Date circuEnd; //date book was taken out of circulation
		bool archived; //is the book archived or not

	public:
		Book() {} //default constructor for the book
		Book(string bookTitle)
		{
			title = bookTitle;
		}

		//setters
		void setTitle(string newTitle);
		void setCircuStart(Date newCircuStart);
		void setCircuEnd(Date newCircuEnd);
		void setArchived(bool isArchived);

		//utility functions
		void verifyQ();
		void sortEmps();
}; 