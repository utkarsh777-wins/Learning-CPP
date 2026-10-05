#include <iostream>

using namespace std;

class rectangle {
int length, breadth;
public:
    rectangle()     // default constructor  -- no args, no return type 
    {
        cout << "Constructor called " << endl;
        cout << "Enter value of length and breadth " << endl;
        cin >> length >> breadth;
    }
    // rectangle(int x, int y);     //parameterized constructor  // constructor overloading
    // rectangle(int p, int q) : length(p), breadth(q) {}      //intializer list 
    rectangle(int p, int q)
    {
        cout << "Parameterized contructor called : " << endl;
        this->length = p; this->breadth = q;
    }

    rectangle(rectangle &ob) // copy contructor 
    {
        cout << "copy constructor called " << endl;
        length = ob.length; breadth = ob.breadth;
    }

    // {
    //     cout << "Parametrized contructor called :" << endl;
    //     length = x; breadth = y;
    // }
    ~rectangle() 
    {
        cout << "Destructor called" << endl;
    }
    void area() 
    {
        cout << "area = " << length * breadth << endl;
    }
};

// rectangle::rectangle(int p, int q) 
// {
//     cout << "Parametrized constructor called: " << endl;
//     length = p; breadth = q;
// }

int main() {
    rectangle r1, r2(100, 200);       // constructor created as soon as the object created
    r1.area();      //default constructor obj was created first so default constructor will be called first
    r2.area();
    rectangle r3(r2); // call to copy constructor method 1
    r3.area();
    rectangle r4 = r3;  // call to copyt constructor method 2
    r4.area();


    return 0;
    
}