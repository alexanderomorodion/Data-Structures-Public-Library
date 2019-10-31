#pragma once
#include <string>

using namespace std;

class Employee
{
	private:
		string name; //name of the employee
		int waitTime = 0; //the amount of wait time
		int retainTime = 0; //the amount of retain time

	public:
		Employee();
		Employee(string empName, int waitTime = 0, int retainTime = 0);

		

		//setters
		void setName(string userName); 
		void setWait(int userWait);
		void setRetain(int userRetain);

		//getters
		string getName(); 
		int getWait();
		int getRetain();


};