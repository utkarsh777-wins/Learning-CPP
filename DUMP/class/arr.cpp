// #include <iostream>
// using namespace std;

// int main() {

//     // int arr[90000000000000000000000000000000000000000000000000000000];  // warning: integer constant is too large for its type
//     int arr[10000];
//     cout << "Size of array is: " << sizeof(arr) << endl;

//     return 0;

// }

#include <iostream>

using namespace std;

class Student {
private:
    int rol; int age; int height; int i; int weight;
public:
    void getd()
    {
        cout << "Enter roll no, age, height and weight";
        cin >> rol >> age >>height >> weight;

    }

    void showd() {
        cout << "Roll no " << rol << "\nage " << age << "\nheight " << height << "\nweight " << weight;
    }
};

int main() {
    int i;
    Student a[3];   ///array of objects 
    for(i=0; i<3; i++) {
        cout << "\n\nStudent " << i+1;
        a[i].getd();
    }
    for(i=0; i<3; i++) {
        cout << "\nStudent" <<i+1;
        a[i].showd();
    }

}