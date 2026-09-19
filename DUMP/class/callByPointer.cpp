#include <iostream>

using namespace std;

// call by pointer
void swap(int *a, int *b);
void Swap(int &, int &);

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    cout << "Before function call: " << num1 << " " << num2 << endl;
    swap(&num1, &num2);
    cout << "after function call: " << num1 << " " << num2 << endl;
    Swap(num1, num2);

    return 0;

}

void swap(int *a, int* b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

}

void Swap(int &a, int &b) {
    
    int temp = 0;
    cout << "Before swapping: " << a << "  " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << a << "  " << b << endl;

}