#pragma once
#include <string>

using namespace std;

class Employee
{
	private:
		string name;
//		string bookHeld;
		int waitTime;
		int retainTime;

	public:
		Employee() {}
		Employee(string userName, string userBook, int userWait, int userRetain);

		void setName(string userName);
//		void setBook(string userBook);
		void setWait(int userWait);
		void setRetain(int userRetain);

		string getName();
//		string getBook();
		int getWait();
		int getRetain();

};