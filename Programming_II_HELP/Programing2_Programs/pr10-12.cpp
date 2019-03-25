// This program demonstrates that a pointer may be used as a 
// parameter to accept the address of an array. Either subscript
// or pointer notation may be used.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
//void getSales(float[], int);
void getSales(float *, int);
float totalSales(float *, int);

int main()
{
  float sales[4];

  getSales(sales, 4);
  cout << sales << endl;
  cout << setprecision(2);
  cout << fixed << showpoint;
  cout << "The total sales for the year are $";
  cout <<  totalSales(sales,4) << endl;
  cout << sales << endl;
  return 0;
}

//*****************************************************************
// Definition of getSales. This function uses a pointer to accept *
// the address of an array of floats. The number of elements in   *
// in the array is passed as a separate integer parameter. The    *
// The function asks the  user to enter the sales figures for     *
// four quarters, then stores those figures in the array using    *
// subscript notation.                                            *         
//*****************************************************************

void getSales(float *array, int size)
{
  for (int count = 0; count < size; count++)
  {
    cout << "Enter the sales figure for quarter ";
    cout << (count + 1) << ": ";
//    cin >> array[count];  // array notation
    cin >> *(array+count);  // pointer notation
  }
}

//***************************************************************
// Definition of totalSales. This function uses a pointer to    *
// accept the address of an array of floats whose size is       * 
// is passed as a separate parameter. The function uses pointer *
// notation to sum the elements of the array.                   *
//***************************************************************

float totalSales(float *array, int size)
{
   float sum = 0.0;

   for (int count = 0; count < size; count++)
   {
     //sum += *array;  
     //array++;
     sum += *array++;  
  
   }
   return sum;
}
