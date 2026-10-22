#include <iostream>
using namespace std;
class abc {
    int x,y,z;
public:
    abc(int a, int b, int c) 
    {
        x=a;
        y=b;
        z=c;
    }
    /*
    in case of unary operator no arguements 
    in case of binary operator arguements
    */
    void operator- () /// operator function
    {
        x = -x; y = -y; z= -z;
    }
    void display() 
    {
        cout << x << "  " << y << "  " << z << endl;
    }
};

int main() {
    abc s1(10,-40,60);
    s1.display();
    -s1;        // overloaded the '-' operator to be implemented on a user-defined object
    s1.display();

    return 0;

}