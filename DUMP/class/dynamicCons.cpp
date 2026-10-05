#include <iostream>

using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Dynamic constructor called, memory allocated for array." << endl;
    }
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i=0; i<size; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        cout << "Array  elements: ";
        for (int i=0; i<size; i++) {
            cout  << arr[i] << " ";
        } cout << endl;
    }
    ~Array() {
        delete[] arr;
        cout << "Destructor called, memory deallocated." << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array : ";
    cin >>size; 
    Array arr(size);
    arr.input();
    arr.display();

    return 0;
}