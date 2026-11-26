#include <iostream>
using namespace std;
template<class T>
T sum(T a, T b) {
    T c;
    c = a+b;
    return(c);
}

// int sum(int a, int b) {
//     int c;
//     c =a+b;
//     return(c);
// }

int main() {

    int n1, n2, res;
    cin >> n1 >> n2;
    res = sum(n1, n2);
    cout << "Int sum = " << res << endl;

    double n3, n4, res2;
    cin >> n3 >> n4;
    res = sum(n3, n4);
    cout << "double sum = " << res2 << endl;

    // int n1, n2, res;
    // res = sum(n1, n2);
    // cout << "Int sum = " << res << endl;

    return 0;

}