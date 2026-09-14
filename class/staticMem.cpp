#include <iostream>

using namespace std;

class dummy {
    
};
class abc {
private:
    int a,b;
public:
    void sum() 
    {
        cin >> a >> b;
        cout << "Sum is: " << a+b << endl;
    }
    friend void addition(abc obj, dummy obj1);  // friend function
};
void addition(abc obj, dummy obj) {
    cout << "Friend Function called: " << endl;
    cin >> obj.a >> obj.b >> obj1.c >> obj1.d;
    cout << "Sum is: " << obj.a + obj.b + obj1.c + obj1.d << endl;
}

int main() {
    abc obj; 
    dummy obj1;
    obj.sum();
    addition(obj, obj1);

    return 0;

}