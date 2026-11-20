#include <iostream>
using namespace std;

// int cnt = 0;

class Counter {
    static int cnt;  //static data member -- default value zero 
public:
    Counter() 
    {
        cnt++;
        cout << "Constructor Msg Count " << cnt<< " Created" << endl;
    }
    ~Counter()
    {
        cout << "Destructor Msg Count " << cnt << " Destroyed" << endl;
        cnt--;
    }
};
int Counter::cnt = 0;
int main() {
    Counter obj;
    {
        // Counter obj1;       // destructor inn reverse order of constructor
        Counter obj1, obj2;
    }
}