#include <iostream>
#include <vector>
using namespace std;

/*

printing any 1 subsequence whose sum is k

*/

// bool flag = true;            // not the correct way 
// void printS(int idx, vector<int> &ds, int s, int arr[], int sum, int n)
// {
//     if (idx == n && flag) {
//         if (s == sum) {
//             flag = false;
//             for (auto it : ds) cout << it << " ";
//             cout << endl;
//         }
//         return;
//     }

//     ds.push_back(arr[idx]);
//     s += arr[idx];

//     printS(idx+1, ds, s, arr, sum, n);
//     ds.pop_back();
//     s -= arr[idx];

//     printS(idx+1, ds, s, arr, sum, n);

// }

bool printS(int idx, vector<int> ds, int s, int arr[], int sum, int n) {
    if (idx == n) {
        // condition satisfied
        if (s == sum) {
            for (auto it : ds) cout << it << " ";
            cout << endl;
            return true;
        }
        // condition not satisfied
        return false;
    }

    ds.push_back(arr[idx]);
    s += arr[idx];
    if(printS(idx+1, ds, s, arr, sum, n) == true) {
        return true;
    }

    ds.pop_back();
    s -= arr[idx];

    if(printS(idx+1, ds, s, arr, sum, n)) return true;

    return false;
}

int main()
{

    int arr[] =  {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    printS(0, ds, 0, arr, sum, n);

    return 0;
    
}