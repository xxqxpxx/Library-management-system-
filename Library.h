#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Library{

public:
	void addNewBook(Book b);
	void addNewBook(vector<Book> v);
	void deleteBook(string value , string searchKey);
	Book& editBookInformation(string ISBN);
	void findBook(string value , string searchKey);
	void sortBooksByAlphabet();
	void DisplayAllBooks();
	int editabookleo ;
	// vector<Book> shelf;

private:

	vector<Book> shelf;
};

#endif