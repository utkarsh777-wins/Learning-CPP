#include <iostream>
using namespace std;

class base1{
    public:
    void show() {
        cout << "Base1 class show called" << endl;
    }
};
class base2{
    public:
    void show() {
        cout << "Base 2 class show called" << endl;
    }
};
class derived:public base1, public base2 {
    // public:
    // void show() {
    //     cout << "derived class" << endl;
    // }
    public:
    void display() {
        base1::show();
        base2::show();

    }
    
};
int  main() {
    derived obj;
    // obj.show();
    obj.display();
    // obj.base1::show();
    // obj.base2::show();

    return 0;
}