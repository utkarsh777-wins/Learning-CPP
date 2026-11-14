#include <iostream>
using namespace std;

// old compilers, by default void
// new compilers  auto return type int'
// private members are never inherited
class base {
    public:
    void show() {
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
    derived obj;
    obj.show();
    obj.base::show();

    return 0;
}