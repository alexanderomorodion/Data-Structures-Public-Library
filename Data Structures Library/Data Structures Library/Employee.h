#pragma once
#include <string>

using namespace std;

class Employee
{
	private:
		string name;
		int waitTime = 0;
		int retainTime = 0;

	public:
		Employee();
		Employee(string empName, int waitTime = 0, int retainTime = 0);

		void setName(string userName); //setters
		void setWait(int userWait);
		void setRetain(int userRetain);

		string getName(); //getters
		int getWait();
		int getRetain();

};