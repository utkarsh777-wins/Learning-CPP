#include <iostream>
using namespace std;

class Conversion{
public:
    float y;
    Conversion()
    {y = 0;}
    Conversion(float t)
    {y=t;}
    void show()
    {cout << "\n y=" << y;}
};

int main() 
{
    Conversion obj1;
    obj1 = 10.4;
    char c = 'a';
    obj1=c;

    obj1.show();

    return 0;

}