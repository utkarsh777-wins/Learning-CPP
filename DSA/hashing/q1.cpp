#include <iostream>
using namespace std;

/*

Given an array of integers, find the first element that appears only once. If every element repeats, return -1.Goal: Solve in $O(n)$ time using a hash map/frequency array instead of nested loops.
Example:Input: [4, 5, 1, 2, 0, 4, 1, 2]
Output: 5

*/

int findingU(int arr[], int n) 
{
    int maxVal = arr[0];
    for(int i=1; i<n; i++) {
        maxVal = (arr[i] > maxVal)? arr[i] : maxVal;
    }
    cout << maxVal << endl;

    // hash array
    int hash[maxVal+1] = {0};     // if maxVal is 3 then we'll need 0, 1, 2, 3 so 4 indexes
    for (int j=0; j<n; j++) {
        hash[arr[j]] += 1;      // precalculation
    }

    for (int i=0; i<n; i++) {
        if (hash[arr[i]] == 1) return arr[i];
    }

    return -1;

}

int main() {

    int n=7;   // 0-6
    int arr[] = {4, 5, 1, 2, 0, 4, 1};
    cout << findingU(arr, n) << endl;


    return 0;

}