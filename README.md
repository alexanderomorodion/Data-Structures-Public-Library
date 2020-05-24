# Data-Structures-Public-Library
Using queues, this project circulates books among employees in a school. The system keeps track of two lists:
- Books to be circulated: these are the books that will be circulated to employees. 
- Archived books: when the last employee on the queue returns the book to the library, the book gets added to the list of archived books
Circulation involves marking the date that the book is being circulated, then creating a priority queue of which employees should receive the book.

The priority queue is created based on the following 2 factors:
- The total waiting time for the employee: How many days the employee waited to get a book since the beginning of the circulation.
- The total retaining time: How many days the employee retained books

To put it simply, the priority is: waiting_time – retaining_time

Once a book is passed on, if the employee passing on the book is the last in the queue, then the book is sent to the archived list.
