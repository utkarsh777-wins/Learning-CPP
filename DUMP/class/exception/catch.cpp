#include <iostream>
using namespace std;

void test(int x) {
    try {
        if (x ==0) throw x;
        if (x == -1) throw 's';
        if (x == 1) throw;
    }
}
int main() 
{
    int age;
    cout << "Enter Age: ";
    cin >> age;
    try {
        if (age>0) cout << "Age= " << age << endl;
        else 
            throw age;
    }
    catch(char) {
        cout << "age is " << age << endl;
        cout << "Age cannot be negative: " << endl;
    }
    catch(...) {
        cout << "All types of exception are caught here " << endl;
    }
}