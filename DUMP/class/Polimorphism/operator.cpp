#include <iostream>
using namespace std;

class complex1 {
    float x, y;
    public:
    complex1() {
        x=0.0; y=0.0;
    }
    complex1(float real, float img) {
        x = real; y = img;
    }
    complex1 operator+ (complex1 obj1) {
        complex1 temp;
        temp.x = x+obj1.x;
        temp.y = y+obj1.y;
        return temp;
    }
    void show_data() {
        cout <<x<< " +i" << y << "\n";
    }
};

int main() {
    complex1 o1(2.7, 3.5), o2(4.2, 5.7), o3;
    o2 = o1+o2;

    return 0;
}
