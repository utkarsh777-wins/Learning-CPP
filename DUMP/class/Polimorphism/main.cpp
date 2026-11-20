#include <iostream>
using namespace std;

/*

one thing many forms
polymorphism : compile time(static) | run time(dynamic) 

*/

class shape{
    int side;
    double radius;
public:
    void area(int s)
    {
        side = s;
        cout << "Area of square is " << side*side << endl;
    }
    void area(double r)
    {
        radius = r;
        cout << "Area of Circle is " << 3.14*radius*radius << endl;
    }
};

int main() 
{
    shape obj; 
    obj.area(5);
    obj.area(3.5);

    return 0;
}