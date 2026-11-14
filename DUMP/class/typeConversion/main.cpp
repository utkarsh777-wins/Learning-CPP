/*

Conversion: Implicit, Explicit 
Types :
Basic to basic
Basic to class
Class to basic
Class to class
Constructor function for converting basic type to class type 
Conversion function - class to basic type (overloaded casting operator)

*/

#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    float b = 10.3;
    a = b;  //implicit
    char c = 'a';
    cout << "a= " << a << endl;
    a = (int)b; // explicit
    cout << "a= " << a << endl;
    a=c;
    cout  << "a= " << a << endl;
    a = (int)b; // explicit

    cout << "a= " << a <<  endl;

    return 0;
}