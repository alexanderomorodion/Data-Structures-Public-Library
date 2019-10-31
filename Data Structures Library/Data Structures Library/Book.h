#pragma once
#include <string>
#include <iterator>
#include "Date.h"
#include "Library.h"

using namespace std;

class Book : public Library
{
	

	private:
		string title; //title of the book
		Date circuStart; //date book began circulating
		Date circuEnd; //date book was taken out of circulation
		bool archived; //is the book archived or not

	public:
		static queue<Employee> employeePrioQ; //prio queue of employees sorted by (waitTime - retainTime) Queue is shared between all books so that when the priority needs to be changed, all books update

		queue<Employee> employeePrioQCopy = employeePrioQ; //copy of prio queue of employees used to pass on books

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

		//getters
		string getTitle();
		Date getCircuStart();
		Date getCircuEnd();
		bool getArchived();

		//utility functions
		void verifyQ();
		void sortEmps();
}; 