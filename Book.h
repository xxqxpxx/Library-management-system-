#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Library;

class Book{
	friend class Library;
public:
	Book(string ISBN,string title,string edition,string publisher,string author,string category,int year,int numberOfPages);
	Book();
	void EditBook(string ISBN,string title,string edition,string publisher,string author,string category,int year,int numberOfPages);
	void displayBookDetails();
	int editabookleo ;
private:

	string ISBN,title,edition,publisher,author,category;
	int year,numberOfPages;
};

#endif