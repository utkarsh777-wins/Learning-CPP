// #include <iostream>
// using namespace std;
// int main() 
// {
//     int age;
//     cout << "Enter Age: ";
//     cin >> age;
//     try {
//         if (age>0) cout << "Age= " << age << endl;
//         else 
//             throw age;
//     }
//     catch(char) {
//         cout << "age is " << age << endl;
//         cout << "Age cannot be negative: " << endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // try {
    //     if (n > 0) {
    //         cout << 10/n << endl;
    //     }
    //     else
    //         throw n;
    // }

    // catch (int) {
    //     cout << "no division by zero please" << endl;
    // }
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if(divisor == 0) {
            throw "Division by zero error!";
        }
        double result = (dividend)/ divisor;
        cout << "Result: " << result << endl;
    }
    catch (const char* errorMsg) {
        cout << "Exception caught: " << errorMsg << endl;
    }
    return 0;
} 