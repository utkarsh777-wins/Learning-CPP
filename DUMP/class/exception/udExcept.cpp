#include <iostream>
using namespace std;

class InvalidAge {
    string message;
public:
    InvalidAge(string m) {
        message = m;
    }
    string getMessage() {
        return message;
    }
};

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    try {
        if (age < 18) {
            throw InvalidAge("Age must be 18 or above");
        }
        cout << "Registration successful!" << endl;
    }
    catch (InvalidAge &e) {
        cout << "Exception: " << e.getMessage() << endl;
    }

    return 0;
    
}