#include <iostream>

using namespace std;

void kthSmallest(int arr[], int n, int k) {

    // bubble sort
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << arr[k-1] << endl;

}

// void kthSmallestt(int arr[], int n) {
//     for(pass = 0; pass < n-1; )
// }

int main() {

    int k;
    
    cin >> k;

    int arr[] = {7, 10, 4, 3, 20, 13};

    int size = sizeof(arr)/sizeof(arr[0]);

    kthSmallest(arr, size, k);

    


    return 0;

}