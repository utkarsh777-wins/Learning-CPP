// #include <iostream>
// using namespace std;

// int main() 
// {
//     int *ptr = new int;
//     *ptr = 100;

//     cout << "ptr = " << *ptr << endl;
//     cout << "Address stored inside the pointer: " << ptr << endl;

//     delete ptr;

//     cout << "Value of ptr = " <<  *ptr << endl;
//     cout << "Address pointed by ptr is : " << ptr << endl;
    
//     return 0;
// }


#include <iostream>
using namespace std;

class employee {
    int empId; string name;
    public:
    void getData() {
        cout << "Enter emp Id and name : ";
        cin >> empId >> name;
    }
    void display() {
        cout << "Employee Detils are : " << endl;
        cout << "Emp Id = " << empId << endl;
        cout << "Emp Name = " << name << endl;
    }
};

int main() {
    int i, n;
    cin >> n;
    employee* e = new employee[n];

    for (i=0; i<n; i++) {
        e[i].getData();
    }
    for (i=0; i<n; i++) {
        e[i].display();
    }
}
// #include <iostream>
// using namespace std;

// class employee {
//     int empId; string name;
//     public:
//     void getData() {
//         cout << "Enter emp Id and name : ";
//         cin >> empId >> name;
//     }
//     void display() {
//         cout << "Employee Detils are : " << endl;
//         cout << "Emp Id = " << empId << endl;
//         cout << "Emp Name = " << name << endl;
//     }
// };

// int main() {
//     employee* e = new employee;
//     e->getData(); e->display();
// }