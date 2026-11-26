#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int balance = 5000;
    int withdrawal;
    cout  << "Enter withdrawal amount: ";
    cin >> withdrawal;
    try {
        if (withdrawal > balance) {
            throw runtime_error("insufficient balance");
        }
        balance = balance - withdrawal;
        cout << "Transaction successfully!" << endl;
        cout << "Remainingg balance: " << balance << endl;
    }
    catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;

}