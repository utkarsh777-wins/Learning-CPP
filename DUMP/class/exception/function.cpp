#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age < 18) {
        throw age;
    }
    cout << "Eligible to vote!" << endl;
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    try {
        checkAge(age);
    } catch (int x) {
        cout << "Not eligible to vote. Age entered : " << x << endl;
    }
    return 0;
}