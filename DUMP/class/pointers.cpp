#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;
    ptr++;
    // *ptr = &a;
    cout << *ptr << endl;

    // int a[5] = {1, 2, 3, 4, 5};
    // int *ptr = a;
    // int **pptr = &ptr;
    return 0;

}