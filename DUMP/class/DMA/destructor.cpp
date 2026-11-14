#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int n;
public:
    Array() {
        cout << "Enter size: ";
        cin >> n;
        arr = new int[n];
        cout << "Enter elements: ";
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

    }
    void display() {
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Array() {
        delete[] arr;
    }

};

int main() {
    Array a;
    a.display();
    return 0;
}