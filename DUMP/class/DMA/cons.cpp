#include <iostream>
using namespace std;

class base {
private:
public:
    base(){
        cout << "base const" << endl;
    }

    virtual ~base() {
        cout << "base destuctor" << endl;
    }
};

class derived: public base {
public:
    derived()  {
        cout << "Derived constructor called" << endl;

    }

    ~derived() {
        cout << "Derived destructor called" << endl;
    }

};



int main() {
    return 0;
}