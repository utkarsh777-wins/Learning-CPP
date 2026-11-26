#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class Student {
private:
    T1 name; T2 roll; T3 section;
public:
    Student (T1 n, T2 r; T3 s) {
        name = n;
        roll = r; 
        section = s;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Section: " << section << endl;
    }

};

int main() 
{
    Student<


    return 0;

}