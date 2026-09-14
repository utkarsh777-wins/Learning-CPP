#include <iostream>

using namespace std;

void pop(int arr[], int n, int idx) {

    for(int i= idx; i<n; i++) {
        arr[i] = arr[i+1];
    }
}

void removeImposters(int arr[], int n) {


    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if(arr[j] == arr[j+1]) {pop(arr, n, j);}
        }
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=size; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 6,};

    int size = sizeof(arr) / sizeof(arr[0]);

    removeImposters(arr, size);

    return 0;
}