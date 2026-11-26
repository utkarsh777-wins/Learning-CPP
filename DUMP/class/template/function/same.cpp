#include <iostream>
using namespace std;

// template<class t1, class t2>
// void sum(t1 x, t2 y) {
//     cout << "sum = " << x+y << endl;
// }
// template<class t1>
// void sum(t1 x, t1 y) {
//     cout << "sum = " << x+y << endl;
// }
void sum(int x, double y) {
    cout << "sum = " << x+y << endl;
}

// function takes priority over template -- overloaded

int main() 
{
    sum(1, 2);
    sum(1, 2.2);

    return 0;
    
}