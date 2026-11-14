#include <iostream>
using namespace std;

// print name n times 
void printN(int n)
{
    if (n == 0) {
        return;
    }

    cout << "Whwwwwwtttttt" << endl;

    printN(n-1);

}
void printn(int i, int n)
{
    if (i > n) return;

    cout << "UJ" << endl;

    printn(i+1, n);
}

// print (1-n)
void printLinearly(int n)
{
    if (n == 0) return;
    static int m = n+1;
    cout << (m - n) << " ";

    printLinearly(n-1);
}
void printL(int i, int n)
{
    if (i>n) return;
    cout << i << " ";
    printL(i+1, n);
}

// print (n-1)
void printRev(int n)
{
    if (n == 0) return;

    cout << n << " ";
    printRev(n-1);

}
void printr(int i, int n) 
{
    if (i < 1) return;
    cout << i << " ";
    printr(i-1, n);
}

// print (1-n) using bactracking

void back1toN(int n)
{
    if (n < 1) return;
    back1toN(n-1);
    cout << n << " ";
}
void back(int i, int n) 
{
    if (i < 1) return;
    back(i-1, n);
    cout << i << " ";
}

//  print (n-1) using backtracking 
void revBack(int i, int n) 
{
    if (i>n) return;

    revBack(i + 1, n);
    cout << i << " ";
}
int main() {
    printN(5);
    printn(1, 6);
    printLinearly(5);
    cout << endl;
    printL(1, 5);
    cout << endl;
    printRev(6);
    cout << endl;
    printr(4,4);
    cout << endl;
    back1toN(7);
    cout << endl;
    back(3, 3);
    cout << endl;
    revBack(1, 7);
    cout << endl;

    return 0;
}