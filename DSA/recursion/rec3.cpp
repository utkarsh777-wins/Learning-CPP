#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1) return n;

    return fibo(n-1) + fibo(n-2);
}
int fibonacci(int n) 
{
    if (n == 1) return n;

    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
}


int main()
{

    cout << fibo(4) << endl;

    return 0;

}