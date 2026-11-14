#include <iostream>
#include <vector>
using namespace std;

int countS(int idx, int s, int arr[], int n, int sum) 
{
    if (s>sum) return 0;
    if (idx == n) {
        if (s == sum) {
            return 1;
        }
        return 0;
    }

    s += arr[idx];

    int l = countS(idx+1, s, arr, n, sum);
    s -= arr[idx];

    int r = countS(idx+1, s, arr, n, sum);

    return l+r;
}

int main() {
    int arr[] = {1,2,1};
    int sum = 2;
    int n = sizeof(arr)/sizeof(int);

    cout << countS(0, 0, arr, n, sum);
    // ds.size();

}