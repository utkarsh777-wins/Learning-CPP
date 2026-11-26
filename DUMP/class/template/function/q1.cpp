// #include <iostream>
// using namespace std;

// // typename|class both will work 
// template<typename t1, class t2>
// auto swap (t1 *a, t2 *b) {
//     auto temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int a=4, b=5;
//     swap(&a, &b);
//     cout << a << " " << b << endl;
//     double c=1.22, d = 2.2;
//     swap 

//     return 0;

// }

#include <iostream>
using namespace std;

template<class t1, class t2>
void swap1(t1 x, t2 y) {

    cout << "before swapping x = " << x << " and y = " << y << endl;
    auto temp = x;
    x = y;
    y = temp;
    cout << "after swapping x = " << x << " and y = " << y << endl;
    
}
int main() {
    // limitation of templates 
    int a=10; double b = 20.2; char c = 'a';

    swap1(a,b);
    swap1(b,c);
    swap1(c,a);
    // cout << swap1(a,b) << endl;
    // cout << swap1(b,c) << endl;
    // cout << swap1(c,a) << endl;

    return 0;

}