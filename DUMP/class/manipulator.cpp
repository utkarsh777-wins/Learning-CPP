#include <iostream>
#include <iomanip>
// iomanip for accessing all these manipulators 
using namespace std;

int main()  {

    string name = "Dummy";
    int rollNO = 101;
    float marks = 87.5678;
    bool passed = true;
    double salary = 123456.789;
    cout << "C++ Manipulators Example" << endl;
    cout << "---------------------------------" << endl;
    cout << left;
    cout << setw(15) << "Name"
         << setw(10) << "Roll NO"
         << setw(12) << "Marks" << endl;
    
    cout << setfill('-') << setw(37) << "" << endl;

    /// reset filll character
    cout << setfill(' ');
    cout << left << setw(15) << name << setw(10) << rollNO
    << fixed << setprecision(2)
    << setw(12) << marks << endl;
    cout << endl;
    cout << "Right Alignment: "  << endl;
    cout << right << setw(22) << "C++" << endl;
    cout << setfill('*') << setw(20) << 25;
    cout << setfill('*') << left << setw(20) << 25 << endl;
    cout << setfill(' ');


    double a = 123.456;
    cout << fixed << setprecision(5) << endl;
    int b = 10;
    cout << dec << b << endl;
    cout << hex << b << endl;
    cout << setbase(10) << b << endl;
    cout << oct << b << endl;


    return 0;

}