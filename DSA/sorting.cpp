#include <iostream>

void bubbleSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) 
    {
        int swapped = 0;        //optimization
        for(int j=0; j<n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped) break;     //already sorted 
    }
}

void insertionSort(int arr[], int n) 
{
    for(int i=1; i<n; i++) 
    {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];      // shift right 
            j--;
        }
        arr[j+1] = key;     // insert into the gap
    }
}

void selectionSort(int arr[], int n)        // best / worst / avg - O(n^2)
{
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;     // tracking the smallest 
            }
        }

        if(minIdx != i) {           // swap only if needed
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

void takeInput(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        std::cin >> arr[i];
    }

}
void printArr(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main() {

    int eg1[5] = {5, 3, 8, 4, 2};
    bubbleSort(eg1, 5);
    printArr(eg1, 5);
    
    int eg2[6] = {5, 2, 4, 6, 1, 3};
    insertionSort(eg2, 6);
    printArr(eg2, 6);
    
    int eg3[5] = {68, 25, 12, 22, 11};
    selectionSort(eg3, 5);
    printArr(eg3, 5);
    
    return 0;

}