#include <iostream>
using namespace std;

class GP {
    protected:
    void showGP() {
        cout << "class GP Called" << endl;
    }
};
class Parent:public GP {
    public:
    void showp() {
        showGP();
        cout << "Class parent called" << endl;
    }
};
// class child:private Parent {    
class child:public Parent {
    public:
    void showC() {
        cout << "Class child called" << endl;
    }
};

int main() 
{
    child obj;
    obj.showp(); obj.showC();


    return 0;
}