// #include <iostream>
// #include <vector>
// using namespace std;

// void printS(int i, vector<int> &ds, int s, int n, int sum, int arr[]) 
// {

//     // basecase
//     if (i==n) {
//         if (s == sum) {
//             // cout << "[" << ds << "]" << endl;
//             for (auto it : ds) {
//                 cout  << "[ ";
//                 cout << ds[it] << " ";
//             }
//             cout << "]" << endl;
//         }
//     }

//     // take 
//     ds.push_back(arr[i]);
//     s += arr[i];
//     printS(i+1, ds, s, n, sum, arr);
//     ds.pop_back();
//     s-= arr[i];

//     // not take
//     printS(i+1, ds, s, n, sum, arr);

// }

// int main() 
// {

//     int arr[] = {1, 2, 1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;

//     printS(0, ds, 0, n, sum, arr);

//     return 0;

// }

#include <iostream>
#include <vector>
using namespace std;

/*

printing subsequences whose sum is k

*/

void printS(int i, vector<int> &ds, int s, int arr[], int n, int sum) {

    // base case 
    if (i == n) {
        if (s == sum) {
            
            for (auto it : ds) {
                cout << "[ ";
                cout << it << " ";
                cout << "]";
            }
            cout << endl;
        }

        return;
    }

    // take 
    ds.push_back(arr[i]);
    s += arr[i];
    printS(i+1, ds, s, arr, n, sum);
    ds.pop_back();
    s -= arr[i];

    // not take;
    printS(i+1, ds, s, arr, n, sum);

}



int main() 
{

    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;

    vector<int> ds;
    printS(0, ds, 0, arr, n, sum);

    return 0;

}