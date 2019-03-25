// This program illustrates Copying Cstrings
#include <iostream> 
#include <cstring>
using namespace std;

int main()
{
    char *pname = "Paul";
    char *lname = "Biolchini";
	char * space = " ";
    //char qname[30];
    //char *qname = new char[strlen(pname)+1];
    char *qname = new char[strlen(pname)+strlen(space)+strlen(lname)+1];

	cout << pname << endl;
	cout << qname << endl;

	//qname = pname;
    strcpy(qname, pname);  //copy - initialization
	cout << pname << endl;
	cout << qname << endl;
	for(int i = 0; i < 30; i++)
		cout << qname[i];
	cout << endl;
	strcat(qname, space);  // concatenation - +
	strcat(qname, lname);  // concatenation - +
	cout << lname << endl;
	cout << qname << endl;

    return 0;
}
