struct Example
{

	int scores[4];
};

Example grades;
grades.scores[0] = 100;

struct ExampleDyn
{
	int * scores;
};

ExampleDyn grades;

int num;
cin >> num;

grades.scores = new int[num];

//////grades.scores[0] = 100;  not correct??


