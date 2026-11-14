#include <iostream>
using namespace std;
class GP {
    // / [virtual base class] can be used to remove the ambiguity problem
public:
    void show() {cout << "show of GP is called" << endl;}
};
class P1: virtual public GP {

};
class P2: virtual public GP {

};
class derived: public P1, public P2 {

};

int main() {
    derived obj;
    obj.show();

    return 0;
}