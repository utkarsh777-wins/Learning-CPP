#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr; // pointer to pointer

    cout << "Address of a is: " << &a << endl;
    cout << "Address of a is: " << &ptr << endl;
    cout << "Address of a is: " << &pptr << endl;

    cout << "a using ptr is: " << *ptr << endl;
    cout << "pptr value is: " << pptr << endl;
    cout << "print a using pptr is: " << *pptr << endl;

    return 0;

}