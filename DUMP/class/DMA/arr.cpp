#include <iostream>
using namespace std;


// virtual exists virtually 
// 
int main() {

    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    
    // allocation failure : in case value of n is too large
    int *arr = new int(n);
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        // cin >> arr[i];
        cin >> *(arr+i);
        sum += *(arr+i);
    }
    for (int i=0; i<n; i++)
    {
        cout << *(arr+i) << endl;
    } 

    cout << "sum = " << sum << endl;
    cout << "avg = " << sum/n << endl;

    delete [] arr;
    cout <<"memory deleted" << endl;

    return 0;
}