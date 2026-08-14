#include <iostream>

using namespace std;

// defining the function outside the class 

class shape {

private:

    int radius, length, width;
    void areaRectangle();
    void areaCircle();
    
public:
    
    // declaring the function within the class
    // void areaCircle();
    void fun() 
    {
        areaCircle();
        areaRectangle();
    }

};

// defining the functionn outside the class 

void shape::areaCircle() 
{

    cout << "Enter radius of the circle : ";
    cin >> radius;
    cout << endl;

    cout <<"Area of the circle is : " << 3.14*radius*radius << endl;

}

void shape::areaRectangle() 
{

    cout << "Enter thhe length and width of the rectangle respectively: ";
    cin >> length >> width;
    cout << endl;

    cout << "Area of rectangle is : " << length*width << endl;
}

int main() {

    shape obj;
    // obj.areaCircle();
    // obj.areaRectangle();
    obj.fun();
    return 0;

}