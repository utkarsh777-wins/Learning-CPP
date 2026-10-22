#include <iostream>
using namespace std;
class Counter {
    int count;
public: 
    // Counter() : count(0) {}
    Counter(int c=0) {
        count = c;
    }

    friend void operator ++(Counter &obj, int);
    friend void operator ++(Counter &obj);

    void display() {
        cout << "Count: " << count << endl;
    }

};
void operator ++(Counter &obj, int) {
    obj.count++;            //modifying private data 
}
void operator ++(Counter &obj) {
    ++obj.count;
}

int main() {

    Counter c(5);
    cout << "Before increment: ";
    c.display();
    c++;
    cout << "After increment: ";
    c.display();
    ++c;
    c.display();


    return 0;
}