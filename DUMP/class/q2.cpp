#include <iostream>
#include <string>

using namespace std;

class student {
private:

    string name;
    int regNum;
    void fetchInfo();
    void displayInfo();

public:

    void fun() 
    {
        fetchInfo();
        displayInfo();

    }

};

void student::fetchInfo(){

    // for name make sure you use get
    cout << "Enter student name: ";
    cin >> name;
    // getline(cin, name);
    // newline character issue in case of getline 
    cin.ignore();
    cout << endl << "Enter registration number of the student: ";
    cin >> regNum;
    cin.ignore();
    cout << endl;

}

void student::displayInfo() 
{

    cout << "Student name: " << name << endl;
    cout << "Student registration number: " << regNum << endl;
}
int main() {

    student obj[2];
    int n = sizeof(obj)/sizeof(student);

    for(int i=0; i<n; i++) {
        obj[i].fun();
    }

    return 0;

}