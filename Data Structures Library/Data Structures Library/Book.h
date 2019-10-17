#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Book
{
	private:
		string title;
		Date circuStart; //date book began circulating
		Date circuEnd; //date book was archived
		bool archived;

	public:
		void setTitle(string newTitle); //setters
		void setCircuStart(Date newCircuStart);
		void setCircuEnd(Date newCircuEnd);
		void setArchived(bool isArchived);
}; 