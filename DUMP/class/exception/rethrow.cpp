#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 100;
        }
        catch (int x) {
            cout << "Inner catch : " << x << endl;
            throw; // rethrow
        }
    }
    catch (int x) {
        cout << "Outer catch : " << x << endl;
    }

    return 0;
    
}