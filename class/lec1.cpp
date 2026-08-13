#include <iostream>

using namespace std;

// class student {     // empty class // 1 byte after obj

// };

// class student {

// private:
//     int a; float b; // 8
//     char c; // paddingn in the memory location // 12 bytes 
//     // 3 byttes are available unallocated
//     char d, e, f; // still 12
//     char g;  // 16

// };

class student {
private:
    int regNum; char name; double fees;    //data member
public:
    void getData()  //member function
    {
        cout << "Enter reg No, Name and fees ";
        cin >> regNum >> name >> fees;
    }
    void showData()
    {
        cout << endl << "Registration Number : " << regNum << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main() {

    student obj; // even incase of empty class the obj req 1 byte to be stored 
    cout << "Memory taken by obj is : "  << sizeof(obj) << endl;

    // acessing the members of the class 
    // obj.member
    obj.getData();
    obj.showData();

    return 0;

}