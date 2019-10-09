#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Book
{
	private:
		string title;
		Date circuStart;
		Date circuEnd;
		bool archived;

	public:
		void setTitle(string newTitle);
		void setCircuStart(Date newCircuStart);
		void setCircuEnd(Date newCircuEnd);
		void setArchived(bool isArchived);
}; 