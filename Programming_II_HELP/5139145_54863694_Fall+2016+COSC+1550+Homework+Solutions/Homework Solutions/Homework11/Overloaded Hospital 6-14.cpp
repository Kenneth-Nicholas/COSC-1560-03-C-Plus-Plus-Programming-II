// Chapter 6 - Programming Challenge 14, Overloaded Hospital
// This program computes and displays patient hospital charges.
// It uses overloaded functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double patientCharges(int, double, double, double);  // In-patient
double patientCharges(double, double);			   	 // Out-patient

int main()
{
	char patientType;             // I=in-patient, O=out-patient
	int  days;                    // Number of days of hospital stay
	double roomRate,              // Daily room rate
		   medication,            // Total medication charges
		   services,              // Total for tests and other services
		   totalCharges;          // Total of all charges

	// Input and validate patient type
	cout << "This program will compute patient hospital charges.\n\n";
	cout << "Enter I for in-patient or O for out-patient: ";
	cin  >> patientType;
	if (patientType == 'i')        // Make  i or o uppercase
		patientType = 'I';
	else if (patientType == 'o')
		patientType = 'O';

	while (patientType != 'I' && patientType != 'O') 
	{
		cout << "Please enter I or O: ";
		cin  >> patientType;
		if (patientType == 'i')     // Make  i or o uppercase
			patientType = 'I';
		else if (patientType == 'o')
			patientType = 'O';
  	} 
	cout << endl;

	// Input and validate data relevant to in-patients
	if (patientType == 'I') 
  	{
		cout << "\nNumber of days in the hospital: ";
     	cin  >> days;
		while (days < 0)
		{
			cout << "Days in hospital must be zero or more.  Please re-enter: ";
			cin  >> days;
		}
		
		cout << "\nDaily room rate: $";
		cin  >> roomRate;
		while (roomRate < 0)
		{
			cout << "Room rate must be zero or more.  Please re-enter: $";
			cin  >> roomRate;
		}
	}
   
	// Input and validate data relevant to all patients
	cout << "\nLab fees and other service charges: $";
	cin  >> services;
	while (services < 0)
	{
		cout << "These charges must be zero or more.  Please re-enter: $";
		cin  >> services;
	}

	cout << "\nMedication charges: $";
	cin  >> medication;
	while (medication < 0)
	{
		cout << "Medication charges must be zero or more.  Please re-enter: $";
		cin  >> medication;
	}

  	// Call correct patientCharges function to return total charges
	if (patientType == 'I')
		totalCharges = patientCharges(days, roomRate, medication, services);
	else
		totalCharges = patientCharges(medication, services);

	// Display the billing statment
	cout << fixed << showpoint << setprecision(2) << endl << endl;
	cout << "******************************\n";
	if (patientType == 'I')
		cout << "Room charges    $" << setw(8) << days*roomRate << endl;
	if (services > 0.0)
		cout << "Lab & Services  $" << setw(8) << services << endl;
	if (medication > 0.0)
		cout << "Medication      $" << setw(8) << medication << endl;
	cout << "==============================\n";
	cout    << "Total charges   $" << setw(8) << totalCharges << endl;
	cout << "******************************\n";
   
	return 0;
}// End of main function

/*************************************************************
 *                        patientCharge                      *
 * This function is called by main to calculate and return   *
 * total patient charges for in-patients                     *
 *************************************************************/
double patientCharges(int days, double rate, double med, double serv)
{
	double charges = days * rate + med + serv;
	return charges;
}// end overload function patientCharges

/*************************************************************
 *                        patientCharge                      *
 * This function is called by main to calculate and return   *
 * total patient charges for out-patients                    *
 *************************************************************/
double patientCharges(double med, double serv)
{
	double charges = med + serv;
	return charges;
}// end overload function patientCharges
