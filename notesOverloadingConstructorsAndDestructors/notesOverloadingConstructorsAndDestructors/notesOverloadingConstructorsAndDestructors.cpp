#include <iostream>
#include <string>
#include <fstream> // for reading from files
using namespace std;

class Book
{
	private: 
		string isbn,
			   title,
			   author,
			   edition;
	public:
		Book();
		// Book(string i);  // should make a note what string variable i is initializing in overloaded constructor
		~Book();
		void setIsbn(string i);
		void setTitle(string t);
		void setAuthor(string a);
		void setEdition(string e);
		string getIsbn();
		string getTitle();
		string getAuthor();
		string getEdition();

		// void setIsbn(string i){ isbn = i; } // inline set function, instead of writing set function after main. works the same
		// string getIsbn(){ return isbn; }    // inline get function, instead of writing get function after main. works the same way
											// RULE : should only write inline functions (inside class) if they're only one line, nothing bigger, if it's bigger,
											// write it after main function
};

int main()
{
	fstream inFile; // for reading from files, need to know the structure of the file in order to be able to read from a file correctly
					// every piece of data is read from a separate file, every file has an end of file marker - tells w/e prog u using 
					// where the end of the file is so it can tell where the end is and where to stop reading data in.
					// if we know how many data members are in a file, we can tell the program to read the exact number of times
					// or we can tell it to read until the end of file marker.
					// goal to bypass user input and use files as input instead
					// need to know repeat order of data - ex ISBN, Title, Author, Edition, 
					// can do ifstream or fstream - both work for inputting data

	inFile.open("Books.txt", ios::in); // as a rule of thumb always put ios::in or ios::out whenever working with input and output 

	Book b1;

	string s;			// need a temporary variable to store the input into before passing to set functions.

	inFile >> s;
	b1.setIsbn(s);		// sets ISBN
	getline(inFile, s); // gets title could have a space, so need whole line
	b1.setTitle(s);		// sets title name
	getline(inFile, s);	// gets author
	b1.setAuthor(s);    // sets author
	inFile >> s;        // gets edition
	b1.setEdition(s);	// sets edition

	// when you open a file and you're reading you don't want to close it and reopen it again
	// it will automatically start reading from the beginning of the file

	// Book book1("978-482-5679-1"); // uses overloaded constructor

	return 0;
}

Book::Book() // standard constructor no arguments
{
	isbn = "";
	title = "";
	author = "";
	edition = "";
}

// Book::Book(string i) // overloaded constructor
// {
// 		isbn = i;
//		title = "";
// 		author = "";
//		edition = "";
// }

Book::~Book() // destructor - removes stuff from what was in variables after runtime so that sensitive information is gone after runtime
{
	isbn = "";
	title = "";
	author = "";
	edition = "";
}