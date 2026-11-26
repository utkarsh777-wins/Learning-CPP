#include <iostream>
using namespace std;

// template<class t> // represents a corresponding data type
// t sum (t a, t b)
// {
//     return (a+b);
// }
template<class t1, class t2>
auto sum (t1 a, t2 b)
{
    return(a+b);
}

int main() 
{
    int n1, n2, resultInt;
    double n3, n4, resultD;
    char n5, n6, resultC;

    cout << "Enter two integers values: ";
    cout << endl;
    cin >> n1 >> n2;
    resultInt = sum(n1, n2);
    cout << "ResultInt: " << resultInt << endl;
    
    cout << "Enter two integers values: ";
    cin >> n3 >> n4;
    cout << endl;
    resultD = sum(n3, n4);
    cout << "ResultDouble: " << resultD << endl;
    
    // cout << "Enter two integers values: ";
    // cin >> n5 >> n6;
    // cout << endl;    // char addition won't work 
    // resultC = sum(n5, n6);
    // cout << "ResultChar: " << resultC << endl;
    
    cout << "Sum= " << n1+n3 << endl;

    return 0;

}