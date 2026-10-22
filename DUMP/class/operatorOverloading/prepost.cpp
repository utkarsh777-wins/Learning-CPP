//  prefix/postfix 

#include <iostream>
using namespace std;

class Counter {
private: 
    int count;
public :
    Counter() : count(0) {} // default constructor in the form of a initializer list 
    int get_count() { return count; }
    void operator ++() // increment (prefic)
    {
        // --count; // will work but we should not change the meaning of the operator 
        ++count;
    }
    void operator ++(int) 
    // void operator ++(float) // as writtent by the developers, placing the int as arguement helps the compiler diffrentiate b/w prefix/postfix
    {
        count++;
    }
};

int main()  {
    Counter c1, c2;
    cout  << "\nc1=" << c1.get_count();
    cout  << "\nc2=" << c2.get_count();
    ++c1;
    ++c2;
    cout  << "\nc1=" << c1.get_count();
    // ++c2;
    c2++;
    cout  << "\nc2=" << c2.get_count();
    c1++;
    ++c2;
    cout  << "\nc1=" << c1.get_count();
    cout  << "\nc2=" << c2.get_count();
    
    return 0;
}


// #include <iostream>
// using namespace std;

// class Counter {
//     int count;
// public:
//     Counter()
//     {
//         count = 0;
//     }
//     void get_count() 
//     {
//         cout << "count: " << count << endl;
//     }
//     void operator++() {     // prefix
//         ++count;
//     }
//     void operator++(int)       // postfix
//     {
//         count++;
//     }
//     void operator--() {     // prefix
//         --count;
//     }
//     void operator--(int)       // postfix
//     {
//         count--;
//     }

// };

// int main()  {
//     Counter c1, c2;
//     c1.get_count();
//     c2.get_count();
//     ++c1, ++c2;
//     c1.get_count();
//     c2.get_count();
//     c1++, c2++;
//     c1.get_count();
//     c2.get_count();
//     c1--, --c2;
//     c1.get_count();
//     c2.get_count();
// }