#include <iostream>
using namespace std;

/*
We cannot create objects of an abstract class 
Derived classes must implement inherited pure virtual functions to become concrete functions
We can create a pointer to it

Pure virtual funcntion is only intialized in abstract class but it needs to be implemented in the conrete class
*/
class Shape 
{
protected:
    int a,b;
public:
    void read() 
    {
        cout << "Enter two values: ";
        cin >> a >> b;
        cout << endl;
    }
    virtual void calculateArea() = 0;
};  //Concrete class
class Rectangle : public Shape 
{
public:
    void calculateArea()
    {
        cout << "Area of Rectangle = " << a*b << endl;
    }
}; // concrete class
class Triangle : public Shape {
public:
    void calculateArea() 
    {
        cout << "Area of Triangle = " << (a * b) / 2.0 << endl;
    }
};
int main() 
{
    Shape *ptr; Rectangle r;
    Triangle t; 
    // Shape a;
    cout << "Rectangle Details" << endl;
    r.read();
    cout << "\nTriangle Details" << endl;
    t.read();
    ptr = &r;
    ptr->calculateArea();
    ptr = &t;
    ptr->calculateArea();

    return 0;

}