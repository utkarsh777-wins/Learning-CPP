#include <iostream>
using namespace std;

class A{
protected:
    void showA() {
        cout << "Class A is Called" << endl;
    }
};
class B{
protected:
    void showB()
    {cout << "Class B is called" << endl;}
};
// public inheritance
// class C:public A, public B{         // multiple inheritance
class C:protected A, public B{
public:
    void showC() {
        cout << "Class C is called" << endl;
    }
};

int main() 
{
    C obj;
    obj.showB(); obj.showA();
}