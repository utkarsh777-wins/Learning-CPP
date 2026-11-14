#include <iostream>
using namespace std;

// int main() {

//     double *p = new double;
//     double *r;
//     r = new double;
//     double *t = new double;

//     cout << "Enter principal, rate, time " << endl;
//     cin >> *p >> *r >> *t;

//     double *si = new double;
//     *si = (*p * *r * *t)/100;
//     cout << "interest = " << *si << endl;
//     delete p; delete r; 
//     delete t, si;

//     return 0;

// }

int main() {
    int *p = new(nothrow) int[100000000000000000];      // nothrow will let the program execute 
    if (p == NULL)
    {
        cout << "memory allocation failed" << endl;
    }
    else {
        cout << "memory allocation successfull" << endl;
    }

    delete[] p;

    return 0;
}