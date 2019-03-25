//Constant Member Functions
/*
Declaring a member function with the const keyword specifies 
that the function is a "read-only" function that does not modify 
the object for which it is called.

To declare a constant member function, place the const keyword 
after the closing parenthesis of the argument list. The const 
keyword is required in both the declaration and the definition. 

A constant member function cannot modify any data members or call 
any member functions that aren't constant.

const member functions can use const objects

Member functions should be declared with the const keyword after them if they can operate 
on a const (this) object. If the function is not declared const, in can not be applied to 
a const object, and the compiler will give an error message. A const function can be applied 
to a non-const object 

A function can only be declared const if it doesn't modify any of its fields. 


*/

// constant_member_function.cpp
class Date
{
public:
	
   Date( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Date::getMonth() const
{
   // month = 1;  //Can't change month - getMonth is a const
   // setMonth(1);
   return month;        // Doesn't modify anything
}
void Date::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 1, 1980 );
   MyDate.setMonth( 4 );    // Okay
   MyDate.getMonth();    // Okay
   BirthDate.getMonth();    // Okay
   //BirthDate.setMonth( 4 ); // C2662 Error (BirthDate is a const)
}