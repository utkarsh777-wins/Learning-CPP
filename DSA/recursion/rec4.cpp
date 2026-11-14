// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsequence(int idx, vector<int> &ds, int arr[], int n) 
// {
//     if (idx == n) {
//         // for iterator in ds : from 0-n in ds
//         for (auto it : ds) {
//             cout << it << " ";
//         }
//         if (ds.size() == 0) cout << "{}"; 
//         cout << endl;
//         return;
//     }

//     // take / pick the particular idx into the subsequence 
//     ds.push_back(arr[idx]);
//     printSubsequence(idx+1, ds, arr, n);
//     ds.pop_back();

//     // not take, or not pick condition, this element is not added to you subsequence
//     printSubsequence(idx+1, ds, arr, n);
// }

// int main() {
//     int arr[] = {3, 1, 2};
//     int n = 3;
//     vector <int> ds;
//     printSubsequence(0, ds, arr, n);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int idx, vector<int> &ds, int arr[], int n) 
{
    if (idx == n) {
        // for iterator in ds : from 0-n in ds
        for (auto it : ds) {
            cout << it << " ";
        }
        if (ds.size() == 0) cout << "{}"; 
        cout << endl;
        return;
    }

    // not take, or not pick condition, this element is not added to you subsequence
    printSubsequence(idx+1, ds, arr, n);

    // take / pick the particular idx into the subsequence 
    ds.push_back(arr[idx]);
    printSubsequence(idx+1, ds, arr, n);
    ds.pop_back();  
    // pop is needed in this case because we still need a not pick condition for this particular recursion take-call
    // dry run this versiont

}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector <int> ds;
    printSubsequence(0, ds, arr, n);

    return 0;
}