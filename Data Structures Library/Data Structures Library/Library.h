#pragma once
#include <iostream>
#include <string>
#include <list>
#include <queue>
#include <vector>
#include "Date.h"
#include "Employee.h"

using namespace std;

class Library
{
	private:
		list<string> booksCirculating;
		list<string> booksArchived;
		vector<Employee*> employeeRoster;

	public:
		void circulateBook(string bookToCirc, Date dateOfCirc);
		void add_book(string title);
		void pass_on(string bookToPass, Date dateOfPass);
		void add_employee(string employeeName);
		//void output_employees();
};