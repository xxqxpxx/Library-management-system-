#include "Library.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
void EnteringBookInfo();
void WelcomeScreen();
void EditingOptions();
void CLS();
void ViewOptions();
// void TraverseStack	(Stack *, void (*)(StackEntry));
int main()
{

	cout << "ahmed" << endl;

	Library mylibrary;
	Book kkk[100];
	int choose , numofbooks = 0;	
	
	while(1)
	{

		WelcomeScreen();

		cin >> choose ;

	if (choose==1) // viewing book & searching 
	{
		CLS();
		ViewOptions();
		if (choose==1)
		mylibrary.DisplayAllBooks();

		else if (choose == 2)
		{
			string x , booktoEdit ;
			cout << "enter the value , then the name key you want to look for: " << endl;
			cin >> booktoEdit >> x ;
			mylibrary.findBook(booktoEdit , x);
		}

		else
			break;
	}

	else if (choose == 2)  // editing the books 
	{
		CLS();
		EditingOptions();
		cin >> choose;

		if (choose ==1) // ADD book 
		{
			CLS();
			int nop ,   y;
			string i ,   e ,   t ,   p ,  a ,   c;
			EnteringBookInfo();
			cin >> i >> nop >> y >> e >> t >> p >> a >> c ;
			  //kkk[numofbooks](i,t,e,p,a,c,y,nop);
			Book& temp = kkk[numofbooks];
			temp.EditBook(i,t,e,p,a,c,y,nop);/*
			temp.ISBN = i;
			temp.title = t;
			temp.edition = e;
			temp.publisher = p;
			temp.author = a;
			temp.category = c;
			temp.year = y;
			temp.numberOfPages = nop;
*/


			mylibrary.addNewBook(kkk[numofbooks++]);
			cout << "Adding is Done" << endl;
		}

		else if (choose == 2)  // Edit book 
			{
				CLS();
				string i ,   e ,   t ,   p ,  a ,   c;
				int booktoEdit ,   nop ,   y;
				cout << "enter the iSPN of book you want to edit : " << endl ;
				cin >> i ;
				// book w = mylibrary.editBookInformation(i);
							// mylibrary.editBookInformation(i).displayBookDetails();
				booktoEdit = (mylibrary.editBookInformation(i)).editabookleo;
				kkk[booktoEdit].displayBookDetails();
				// w.displayBookDetails();
					cout << "enter The Book's Data in the following sequence :" << endl;
					cout << "iSPN number Of Pages  year edition  Title  publisher  Author category" << endl;
				cin >> i >> nop >> y >> e >> t >> p >> a >> c ;
				

			Book& temp = kkk[booktoEdit];
			temp.EditBook(i,t,e,p,a,c,y,nop);
			/*
			temp.ISBN = i;
			temp.title = t;
			temp.edition = e;
			temp.publisher = p;
			temp.author = a;
			temp.category = c;
			temp.year = y;
			temp.numberOfPages = nop;*/



				cout << "Editing is Done" << endl; 
			}

		else if (choose == 3) // Delete book 
			{
				CLS();
				string booktoEdit , x ;
				cout << "enter category or Title  , then the name of the book  you want to Delete: " << endl;
				cin >> booktoEdit >> x ;
				mylibrary.deleteBook(booktoEdit , x);
				// booksInLibrary[booktoEdit].editBook(0 ,0 ,0, NONE ,NONE ,NONE ,NONE);
				cout << "Deleteing Done" << endl; 
			}	

		else if (choose == 4) // sort book 
			{
				CLS();
				mylibrary.sortBooksByAlphabet();
				mylibrary.DisplayAllBooks();
			}	
			

			else
			{
			// int i , int nop , int y, int e , string t , string p ,string a	;
			cout << "Wrong number , try again :" << endl;
			cin >> choose;
			}	

	}

	else if ( choose == 3)
		break;

	else  // wrong answer 
		{
			cout << "Wrong number , try again :" << endl;
			cin >> choose;
		}	





	}



	return 0;
}




void WelcomeScreen()
{
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||| welcome to our library |||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"| what would you like to do? ||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||| Enter the process number|||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||1-Browse The avaliable books|" << endl;
	 cout <<"|||||||||||||||||||||||||||||||" <<endl;
    cout <<"||2-Edit the Books in the list|" << endl;
    cout <<"|||||||||||||||||||||||||||||||" <<endl;

    cout <<"||3-exit |" << endl;
    cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;

	cout << endl;
	cout << endl;
}


void EditingOptions()
{

	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"| what would you like to do? ||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||| Enter the process number|||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||| 1-ADD book     ||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||| 2-Edit book    ||||||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||| 3-Delete book  ||||||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout << endl;
	cout << endl;
}


void CLS()
{
	cout << string(15, '\n');
}


void EnteringBookInfo()
{
	cout << "enter The Book's Data in the following sequence :" << endl;
	cout << "iSPN number Of Pages  year edition  Title  publisher  Author category" << endl;
}



void ViewOptions()
{

	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"| what would you like to do? ||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||| Enter the process number|||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||| 1-View all books ||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||| 2-find a book  ||||||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"||||||||||||| 3-exit ||||||||||" << endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout <<"|||||||||||||||||||||||||||||||" <<endl;
	cout << endl;
	cout << endl;
}