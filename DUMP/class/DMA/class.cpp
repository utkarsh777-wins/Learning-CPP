#include <iostream>
using namespace std;

class Array 
{
    int *arr;
    int size;

public:
    void getData()  
    {
        cout << "Enter size: "; 
        cin >> size;
        arr = new int[size];
        cout << "Enter elements: ";
        
        for(int i=0; i<size; i++) {
            cin >> arr[i];
        }

    }
    void display()
    {
        cout << "Elements: ";
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    ~Array()
    {
        delete[] arr;
        cout << "Memory released" << endl;
    }
};

int main() {
    Array a; a.getData(); a.display();

    return 0;

}