// #include <iostream>
// #include <vector>
// using namespace std;

// // Merge two sorted subarrays: arr[low..mid] and arr[mid+1..high]
// void merge(vector<int>& arr, int low, int mid, int high) {
//     vector<int> temp;                  // Temporary buffer for the merged result
//     int i = low;                       // Pointer into the left half
//     int j = mid + 1;                   // Pointer into the right half

//     // Repeatedly take the smaller front element from either half
//     while (i <= mid && j <= high) {
//         if (arr[i] <= arr[j]) {        // <= keeps the sort stable
//             temp.push_back(arr[i++]);
//         } else {
//             temp.push_back(arr[j++]);
//         }
//     }

//     // Copy whatever remains in the left half (the right half is already in place)
//     while (i <= mid) {
//         temp.push_back(arr[i++]);
//     }

//     // Copy whatever remains in the right half
//     while (j <= high) {
//         temp.push_back(arr[j++]);
//     }

//     // Write the merged result back into the original array
//     for (int k = 0; k < (int)temp.size(); k++) {
//         arr[low + k] = temp[k];
//     }
// }

// void mergeSort(vector<int>& arr, int low, int high) {
//     if (low < high) {                  // Base case: one element is already sorted
//         int mid = low + (high - low) / 2;   // Avoids overflow of (low + high)

//         mergeSort(arr, low, mid);           // Sort left half
//         mergeSort(arr, mid + 1, high);      // Sort right half
//         merge(arr, low, mid, high);         // Combine the sorted halves
//     }
// }

// int main() {
//     vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
//     mergeSort(arr, 0, arr.size() - 1);

//     for (int x : arr) cout << x << " ";
//     cout << endl;   // Output: 3 9 10 27 38 43 82
// }

#include <iostream>
using namespace std;

// Merge two sorted subarrays: arr[low..mid] and arr[mid+1..high]
void merge(int arr[], int low, int mid, int high) {
    int n = high - low + 1;
    int* temp = new int[n];   // Temporary buffer for the merged result
    int i = low;              // Pointer into the left half
    int j = mid + 1;          // Pointer into the right half
    int k = 0;                // Index into temp

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {          // <= keeps the sort stable
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)  temp[k++] = arr[i++];   // Leftovers from the left half
    while (j <= high) temp[k++] = arr[j++];   // Leftovers from the right half

    for (k = 0; k < n; k++) {
        arr[low + k] = temp[k];               // Copy back into the original array
    }

    delete[] temp;
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);   // Number of elements

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;   // Output: 3 9 10 27 38 43 82
}