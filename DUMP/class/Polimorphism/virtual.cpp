#include <iostream>
using namespace std;

class base {    // abstract class
public:
    virtual void show() = 0;    // pure virtual function doesn't require a body 
    // it just needs to be initialized with zero
};
class derived:public base { // concrete class
public:
    void show()
    {

    }
};


int main() {

    return 0;

}