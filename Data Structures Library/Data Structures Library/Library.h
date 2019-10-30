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
		list<Book> booksCirculating; //a list of the books circulating
		list<Book> booksArchived; //a list of the books archived
		vector<Employee> employeeRoster; //full list of employees
		
	public:
		void circulateBook(string bookToCirc, Date dateOfCirc);
		void add_book(string title);
		void pass_on(string bookToPass, Date dateOfPass);
		void add_employee(string employeeName, int newWait = 0, int newRetain = 0);
		//void output_employees();
};