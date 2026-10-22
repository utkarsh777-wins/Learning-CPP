#include <iostream>
using namespace std;

void printn(int n) {
    
    if (n==0) {
        return;
    }

    cout << n << " ";
    printn(n-1);

}

void nSum(int n, int &sum) {
    
    // int sum = 0;

    if (n == 0) {
        return;
    }

    sum += n;
    nSum(n-1, sum);
    
    // cout << sum;
}

int main() {
    printn(5);
    
    // cout << nSum(10) << endl;
    int sum = 0;
    nSum(10, sum);
    cout << "\n" << sum;
    
    return 0;
}