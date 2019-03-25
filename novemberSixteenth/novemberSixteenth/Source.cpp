#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string stuName;
	double avgScore;
	char stuGrade;
	double* stuScores = nullptr;
	int numTests;					// number of tests to allocate
public:
	Student(int num);				// parameter represents the # of tests for the student
	~Student();
	void setName(string n){ stuName = n; }
	string getName(){ return stuName; }
	double getAvgScore();
	char getGrade();
	void setScore(double);
};

int main()
{
	Student student1(8); // declare a student with 8 tests

	return 0;
}

Student::Student(int num)
{
	numTests = num;
	stuScores = new double[numTests];
}

Student::~Student()
{
	delete[] stuScores;
	stuScores = nullptr;
}