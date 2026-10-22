// #include <iostream>
// using namespace std;

// class A {
// public:
//     int x;
//     A() { x = 5; }
// };

// int main() {
//     A obj;
//     obj.x += 3;
//     cout << obj.x;
// }

// #include <iostream>
// using namespace std;

// void change(int &x) {
//     x = x + 10;
// }

// int main() {
//     int a = 5;
//     change(a);
//     cout << a;
// }

// #include <iostream>
// using namespace std;

// int fun(int x) { return x * 2; }
// double fun(double x) { return x / 2; }

// int main() {
//     cout << fun(6) << " " << fun(6.0);
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a[] = {10, 20, 30, 40};
//     int *p = a;
//     cout << *(p + 2);
// }

// #include <iostream>
// using namespace std;

// class Test {
// public:
//     static int count;
//     Test() { count++; }
// };

// int Test::count = 0;

// int main() {
//     Test a, b, c;
//     cout << Test::count;
// }

// #include <iostream>
// using namespace std;

// class Number {
// public:
//     int n;
//     Number(int x) : n(x) {}
//     Number(const Number &obj) : n(obj.n + 1) {}
// };

// int main() {
//     Number a(4);
//     Number b = a;
//     cout << a.n << " " << b.n;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("mcq.txt");
    out << "Hello";
    out.close();

    ofstream app("mcq.txt", ios::app);
    app << " C++";
    app.close();

    ifstream in("mcq.txt");
    string s;
    getline(in, s);
    cout << s;
}