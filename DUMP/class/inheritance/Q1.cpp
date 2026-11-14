// #include <iostream>
// using namespace std;

// class Square{
// private:
//     int side;
// public:
//     void getSide(int s) {
//         cout << "Enter the side of the square: ";
//         side = s;
//     }
//     int area() {
//         return side*side;
//     }
// };
// class cost{
// private:
//     int cost;
// public:
//     int costPerUnitArea(int c) {
//         cost = c;
//         return c;
//     }
    
// };
// class result: public Square, public cost {
// public:
//     void totalCost(int area, int cost) {
//         cout << "Total Cost: " << area*cost << endl;
//     }
// };

// int main() {
//     result r;
//     r.totalCost(r.area(5), r.cost(10));
// }

#include <iostream>
using namespace std;

class square {
protected:
    int side;
public: 
    void getSide() {
        cout << "Enter Side : " << endl;
        cin >> side;
    }
};

class area:public square {
public:
    void getArea() {
        cout << "Area = " << side*side << endl;
    }
};

class perimeter:public square {
public:

    void getPerimeter () {
        cout << "Perimeter = " << 4*side << endl;
    }
};
int main() {
    area obj;
    obj.getSide();
    obj.getArea();
    perimeter obj1;
    obj1.getSide();
    // obj1.getAr
    obj1.getPerimeter();

    return 0;

}