#pragma once
#include <iostream>
#include <string>
#include <list>
#include <queue>
#include <vector>
#include "Date.h"
#include "Employee.h"
#include "Book.h"

using namespace std;

class Library
{
	private:
		list<string> booksCirculating;
		list<string> booksArchived;
		vector<Employee*> employeeRoster; //full list of employees
		
	public:
		void circulateBook(string bookToCirc, Date dateOfCirc);
		

		//sorts employees and pushes them to prio queue
		

		//adds book to list of circulating books
		void add_book(string title);

		void pass_on(string bookToPass, Date dateOfPass);

		//adds employee to full roster
		void add_employee(string employeeName, int newWait = 0, int newRetain = 0);
		//void output_employees();


};