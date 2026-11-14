#include <iostream>
using namespace std;

class base {
    public: //without virtual it will give base class or with virtual it will give derived class
    // void show() {       // overrriden
    virtual void show() {       

        cout << "Base show" << endl;
    }
};
class derived:public base {
public:
    void show() {
        cout << "derived show" << endl;
        // return 1;
    } 
};
int main() {

    base *ptr;
    derived d;
    ptr = &d;// derived will put 
    ptr->show(); // early binding is happening  or static binding

    return 0;
}

// dynamic binding -- runtime
// static binding  -- compile time 