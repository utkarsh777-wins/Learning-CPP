#include <iostream>
using namespace std;

class Date {
private:
    int date, month, year;
    void setDate(int d, int m, int y) {
        date = d;
        month = m;
        year = y;
    }
public:
    void getDate(int d, int m, int y) {
        setDate(d, m, y);
        cout << "The date is : " << d << "/" << m << "/" << y << endl;
    }
};

int main() {
    Date d1, *dateptr;
    dateptr->getDate(19, 9, 2026);

    return 0;
}
