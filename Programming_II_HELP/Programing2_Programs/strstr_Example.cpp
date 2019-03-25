#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void find_str(char const* str, char const* substr) 

int main() 
{
    char* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");
 
    return 0;
}

void find_str(char const* str, char const* substr) 
{
    char* pos = strstr(str, substr);
    if(pos) {
        cout << "Found the string " << substr << " in " << str << " at position: " pos - str << endl;
    } else {
        cout << "The string  " << substr << " was not found in :"<< str << endl;
    }
}



/*
Found the string 'two' in 'one two three' at position: 4
Found the string '' in 'one two three' at position: 0
The string 'nine' was not found in 'one two three'
Found the string 'n' in 'one two three' at position: 1
*/