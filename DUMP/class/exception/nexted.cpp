#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Outer try block" << endl;
        try {
            cout << "Inner try block" << endl;
            throw  10;
        }
        catch (double x) {
            cout << "Inner catch block" << endl;
        }
        catch (...) {
            cout << "all Exception: Inner catch block" << endl;
        }
    }
    catch (int x) {
        cout << "Outer catch block" << endl;

    } 
    cout << "Hello" << endl;

    return 0;
}