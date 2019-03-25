//
#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int idNum;
	int *tests;
	float	avg; 
	string grade;
};

int main()
{

	int numStudents, numTests;
	cout << "How many students are there? ";
	cin >> numStudents;
	cout << "How many test scores are there? ";
	cin >> numTests;

	Student * student;
	student = new Student[numStudents];
	// or
	// Student * student = new Student[st];

	for (int s = 0; s < numStudents; s++)
	{
		cout << "Enter Student Name: ";
		cin.ignore();
		getline(cin, (*(student+s)).name);  
		// or 
		// getline(cin, (student+s)->name); 
		// or 
		// getline(cin, student[s].name);
		cout << "Enter Student ID Number: ";
		cin >> (*(student+s)).idNum;

		student[s].tests = new int[numTests];

		for (int t = 0; t < numTests; t++)
		{
			cout << "Enter Test Score " << t + 1 << ": ";
			cin >> student[s].tests[t];		
			// or                              //// See Table 11-3 on page 627
			// cin >> (student + s)->tests[t]  //pointer->array variable (not a pointer)
			// or 
			// cin >> (*(student+s)).tests[t] //pointer.array variable (not a pointer)
			// or 
			// cin >> *(student + s)->(tests+t) //dereferenced pointer-> dereferenced array location (pointer)
			// or 
			// cin >> *(*(student + s)).(tests+t) //dereferenced pointer.dereferenced array location (pointer)
		}
	}
	for (int s = 0; s < numStudents; s++)
		{
			cout << "Student Name: " << (student + s)->name << endl;   
			// or 
			// cout << "Student Name: " << student[s].name  << endl;

			cout << "Student ID Number: " << (student + s)->idNum << endl;  
			// or 
			//cout << "Student ID Number: " << student[s].idNum << endl;
			for (int t = 0; t < numTests; t++)
			{
				cout << "Test " << t+1 << " score: " << (student + s)->tests[t] << endl;
//				cout << "Test " << t+1 << " score: " << *(student + s)->(tests+t) << endl;
			}
		}

// added to clear memory
	for (int i = 0; i < numStudents; i++)
		delete [] student[i].tests;

	delete [] student;
	//for (int i = 0; i < numStudents; i++)  // causes runtime error if after delete [] student
	//	delete [] student[i].tests;

	return 0;
}
