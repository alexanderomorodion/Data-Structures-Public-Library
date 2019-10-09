#pragma once
#include <string>

using namespace std;

class Employee
{
	private:
		string name;
		int waitTime;
		int retainTime;

	public:
		Employee();
		Employee(string userName);

		void setName(string userName);
		void setWait(int userWait);
		void setRetain(int userRetain);

		string getName();
		int getWait();
		int getRetain();

};