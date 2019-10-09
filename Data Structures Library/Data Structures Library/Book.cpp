#include "Book.h"

void Book::setTitle(string newTitle)
{
	title = newTitle;
}

void Book::setCircuStart(Date newCircuStart)
{
	circuStart = newCircuStart;
}

void Book::setCircuEnd(Date newCircuEnd)
{
	circuEnd = newCircuEnd;
}

void Book::setArchived(bool isArchived)
{
	archived = isArchived;
}
