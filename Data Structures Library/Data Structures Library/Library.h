#pragma once
#include <string>
#include <list>
#include <queue>
#include <vector>
#include "Date.h"

using namespace std;

class Library
{
	private:
		list<string> booksCirculating;
		list<string> booksArchived;

	public:
		void circulateBook(string bookToCirc, Date dateOfCirc);
		void add_book(string title);
		void pass_on(string bookToPass, Date dateOfPass);
};