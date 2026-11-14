#include <iostream>
using namespace std;

class Engine {
public:
    void start() {cout << "Engine starting brummm...\n";}
};
class Car {
private:
    Engine engine; //  Composition: Car completely own this Engine instance
public:
    void startCar() {
        engine.start();
    }
    // when a car object goes out of scope or is deleted
    // the engine object is automatically destroyed alongside

};

int main() {
    Car myCar;
    myCar.startCar();
    return 0;
}