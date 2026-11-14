
#include <iostream>
using namespace std;

// sum of first n noS
// Parametrised
void printN(int i, int sum)
{
    if (i < 1) 
    {
        cout << "Sum: " << sum << endl;
        return;
    }
    printN(i - 1, sum + i);
}
// Functional
int sumN(int n) {

    if (n == 1) return 1;

    return n + sumN(n-1);

}

void fact(int i, int f)
{
    if (i == 1) {
        cout << "Factorial: " << f*i << endl;
        return;
    }

    fact(i-1, f*i);
}
int factorial(int n)
{
    if (n == 1) return 1;

    return n * factorial(n-1);
}

void printArr(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void revArr(int arr[], int n) {
    cout << "Before reversal : ";
    printArr(arr, n);

    for(int i=0; i<n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
    }
    cout << "After reversal : ";
    printArr(arr, n);
}
void reverseArr(int* l, int *r) {
    if (l >= r) return;

    swap(l, r);
    reverseArr(l+1, r-1);
}
void reverseA(int i, int arr[], int n)
{
    if (i >= n/2) return;

    swap(arr[i], arr[n-i-1]);

    reverseA(i+1, arr, n);

}

bool palindrome(int i, string s, int n)
{
    if (i >= n/2) return true;

    if (s[i] != s[n-i-1]) return false;

    return palindrome(i+1, s, n);
}
bool f(int i, string &s) 
{
    if (i >= s.size()/2) return true;

    if (s[i] != s[s.size() - i - 1]) return false;

    return f(i+1, s);
}
void isPalindrome(int i, string s)
{
    if (i >= s.size()/2) {
        cout << "iSyOurpaLlinDromE" << endl;
        return;
    }    

    if (s[i] != s[s.size() - i - 1]) {
        cout << "nOtYourPalliDrOMe" << endl;
        return;
    }

    isPalindrome(i+1, s);
}
int main()
{
    
    printN(10, 0);
    cout << "Sum= " << sumN(10) << endl;
    fact(5, 1);
    cout << "Factorial= " << factorial(5) << endl;
    int arr[] = {1, 2, 3, 4, 2};
    revArr(arr, sizeof(arr)/sizeof(int));
    reverseArr((arr), (arr + (sizeof(arr)/sizeof(int) - 1)));
    printArr(arr, sizeof(arr)/sizeof(int));
    reverseA(0, arr,  sizeof(arr)/sizeof(int));
    printArr(arr, sizeof(arr)/sizeof(int));
    string s = "radar";
    if(!palindrome(0, s, s.size())) {
        cout << "not a pallindrome" << endl;
    } else {
        cout << "is a pallindrome" << endl;
    }
    if(!f(0, s)) {
        cout << "not a pallindrome" << endl;
    } else {
        cout << "is a pallindrome" << endl;
    } 
    isPalindrome(0, s);  

    return 0;

}