#pragma once
#include <string>
#include "Date.h"
#include "Library.h"

using namespace std;



class Book
{
	private:
		queue<Employee*> employeePrioQ; //prio queue of employees sorted by (waitTime - retainTime)
		string title;
		Date circuStart; //date book began circulating
		Date circuEnd; //date book was taken out of circulation
		bool archived;

	public:
		void setTitle(string newTitle); //setters
		void setCircuStart(Date newCircuStart);
		void setCircuEnd(Date newCircuEnd);
		void setArchived(bool isArchived);
		void verifyQ();
		void sortEmps();
}; 