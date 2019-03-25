//  Written by C++ Programmer
//  March 31, 2003
//  Chapter 11
//  Assignment 6:  Speakers' Bureau
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declaration of the Speaker structure
class Speaker
{
private:
	string name;		// Speaker's name
	string phone;		// Speaker's telephone number
	string topic;		// Speaker's speaking topic
	float fee;			// Speaker's fee for speaking
public:
//	Speaker();
	Speaker(string = "noName", 
			string = "XXX-XXX-XXXX", 
			string = "No Topic Entered", 
			float = 0.0);
	bool setName(string);
	bool setPhone(string);
	bool setTopic(string);
	bool setFee(float);
	string getName() {return name;}
	string getPhone() {return phone;}
	string getTopic() {return topic;}
	float getFee() {return fee;}
};

	//Speaker::Speaker()
	//{
	//	name = "noName";
	//	phone = "XXX-XXX-XXXX";
	//	topic = "No Topic Entered";
	//	fee = 0.0;
	//}
	Speaker::Speaker(string n, string p, string t, float f)
	{
		name = n;
		phone = p;
		topic = t;
		fee = f;
	}


bool Speaker::setName(string n)
{
	bool result = false;
	if(n.length() > 0)
	{
		name = n;
		result = true;
	}
	return result;
}

bool Speaker::setPhone(string p)
{
	bool result = false;
	if(p.length() > 0)
	{
		phone = p;
		result = true;
	}
	return result;
}

bool Speaker::setTopic(string t)
{
	bool result = false;
	if(t.length() > 0)
	{
		topic = t;
		result = true;
	}
	return result;
}

bool Speaker::setFee(float f)
{
	bool result = false;
	if(f >= 0)
	{
		fee = f;
		result = true;
	}
	return result;
}

// Function prototypes
void getInfo(Speaker &);
void showInfo(Speaker);
void showAll(Speaker[],int);

int main()
{
	const int MaxNumber = 10;
	int maxSpeaker = 3, choice, spk;
	Speaker list[MaxNumber] = {
		Speaker("Paul", "3141234567","Programming",1200),
		Speaker("Waldo","123456789","Widgets"),
		Speaker("Donna","6361234567","Singing",2400)};

	do
	{
		cout << "\n1. Enter new speaker information\n";
		cout << "2. Change speaker information\n";
		cout << "3. Display a speaker\'s information\n";
		cout << "4. Display all speaker information\n";
		cout << "5. Exit the program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		// Validate the menu choice.
		while (choice < 1 || choice > 5)
		{
			cout << "Please Enter 1, 2, 3, 4, or 5.\n";
			cin >> choice;
		}

		switch (choice)
		{
			case 1:  
				cin.get();
				if (maxSpeaker >= MaxNumber)
				{
					cout << "You have reached the maximum number of speakers.\n";
					break;
				}

				getInfo(list[maxSpeaker]);
				cout << "You have entered information for speaker ";
				cout << "number " << maxSpeaker << endl;
				maxSpeaker++;
				break;

			case 2:	
				cout << "Speaker number: ";
				cin >> spk;
				// Validate input
				while (spk < 0 || spk >= maxSpeaker)
				{
					cout << "ERROR: Invalid Speaker Number\n";
					cin >> spk;
				}

				cin.get();
				showInfo(list[spk]);
				getInfo(list[spk]);
				break;

			case 3:	
				cout << "Speaker number: ";
				cin >> spk;
				// Validate input
				while (spk < 0 || spk >= maxSpeaker)
				{
					cout << "ERROR: Invalid Speaker Number\n";
					cin >> spk;
				}

//				cin.get();
				showInfo(list[spk]);
				break;

			 case 4:  
				cin.get();   // cin.ignore();
/*				for (int count = 0; count < maxSpeaker; count++)
				{
					showInfo(list[count]);
					cout << "Press enter to continue...";
					cin.get();
				}
				 */
				showAll(list, maxSpeaker);
				//showAll(list, MaxNumber);
        }
   } while (choice != 5);

	return 0;
}

//*******************************************************
// Function getInfo                                     *
// This function gets the speaker info from the user,   *
// validates it, and stores it in the reference         *
// parameter s.                                         *
//*******************************************************

void getInfo(Speaker &s)
{
	string name, phone, topic; 
	float fee;
	cout << "\nSpeaker name: ";	
	getline(cin, name);
	while (!s.setName(name))
	{
		cout << "Please enter a name: ";
		getline(cin, name);
	}
	
	cout << "Telephone: ";
	getline(cin, phone);
	while (!s.setPhone(phone))
	{
		cout << "Please enter a telephone number: ";
		getline(cin, phone);
	}

	cout << "Speaking topic: ";
	getline(cin, topic);
	while (!s.setTopic(topic))
	{
		cout << "Please enter a speaking topic: ";
		getline(cin, topic);
	}

	cout << "Fee required: ";
	cin >> fee;
	while (!s.setFee(fee))
	{
		cout << "Please enter a value of 0 or greater: ";
		cin >> fee;
	}
	cin.get();
}

//*******************************************************
// Function showInfo                                    *
// This function displays the data stored in the        *
// parameter s.                                         *
//*******************************************************

void showInfo(Speaker s)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Speaker name  : " << s.getName() << endl;
	cout << "Telephone     : " << s.getPhone() << endl;
	cout << "Speaking Topic: " << s.getTopic() << endl;
	cout << "Required Fee  : $" << s.getFee() << endl;
}

void showAll(Speaker s[], int max)
{
	for(int i=0;i<max;i++)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Speaker name  : " << s[i].getName() << endl;
		cout << "Telephone     : " << s[i].getPhone() << endl;
		cout << "Speaking Topic: " << s[i].getTopic() << endl;
		cout << "Required Fee  : $" << s[i].getFee() << endl << endl;
	}
}
