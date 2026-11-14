#include <iostream>
#include <vector>
using namespace std;

// heap sort creation code using vectors 
void heapify(vector<int>&arr, int n, int i)
{
    // Take i as the largest root 
    int largest = i;

    // calculation of left and right idx
    int l = 2*i+1;

    // right idx
    int r = 2*i+2;

    //Checking the largest 
    if (l<n && arr[l]>arr[largest]) {
        largest = l;
    }

    // Checking for the largest in the right side
    if (r<n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}

// heapsort function call
void heapSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = n/2-1; i>=0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n-1; i>0; i--) 
    {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }

}
int main() {
    vector<int> arr = {9,4,3,8,10,2,5};
    heapSort(arr);

    for (int i=0; i<arr.size(); i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;

}