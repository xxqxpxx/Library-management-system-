#include "Library.h"


void Library::addNewBook(Book b){

	shelf.push_back(b);
}

void Library::addNewBook(vector<Book> v){

	for ( auto i : v )
		shelf.push_back(i);
}

void Library::deleteBook(string value , string searchKey){

	if ( searchKey == "category" ){

		while ( find_if(shelf.begin(),shelf.end() 
							,[=](Book b){return b.category == value;} )  != shelf.end() ){


			shelf.erase( remove_if( shelf.begin(),shelf.end() 
							,[=](Book b){return b.category == value;} ) ,shelf.end());
		}
		
	}
	else if ( searchKey == "title" ){

		shelf.erase( remove_if(shelf.begin(),shelf.end() , [=](Book b){return b.title == value;}) , shelf.end() );
	}
}

Book& Library::editBookInformation(string ISBN){

	int index = -1;

	auto it = find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.ISBN == ISBN;} );

	if ( it != shelf.end() ) 
		index = it - shelf.begin();
	
	editabookleo = index ;
	return shelf[index];
}

void Library::findBook(string value , string searchKey){

	if ( "ISBN" == searchKey){

		auto it = find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.ISBN == value;} );// == shelf.end();

		if ( it != shelf.end() )
			it->displayBookDetails();
	}

	else if ("title" == searchKey){

		auto it = find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.title == value;} );// == shelf.end();

		if ( it != shelf.end() )
			it->displayBookDetails();
	}

	else if ("publisher" == searchKey){

		auto it = find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.publisher == value;} );// == shelf.end();

		if ( it != shelf.end() )
			it->displayBookDetails();
	}

	if ( searchKey == "category" ){

		auto it = shelf.end();

		while ( find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.category == value;} )  != shelf.end() )
			it->displayBookDetails();
	}
	
	if ( searchKey == "year" ){
		
		auto it = shelf.end();

		while ( find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.year == atoi(value.c_str());} )  != shelf.end() )
			it->displayBookDetails();
	}

	if ( searchKey == "author" ){
		
		auto it = shelf.end();

		while ( find_if(shelf.begin(),shelf.end() ,[=](Book b){return b.author == value;} )  != shelf.end() )
			it->displayBookDetails();
	}	
}

void Library::sortBooksByAlphabet(){


	for ( int i = 0; i < shelf.size(); ++i ){

		for ( int k = 0; k < shelf.size()-1; ++k ){

			if ( shelf[k].title > shelf[k+1].title )
				swap(shelf[k],shelf[k+1]);
		}
	}
}


void Library::DisplayAllBooks()
{
	
	for ( int i = 0 ; i < shelf.size() ; i++)
	{
		cout << "|||||||||||||||||||||||" << endl;
		shelf[i].displayBookDetails();
	}

}