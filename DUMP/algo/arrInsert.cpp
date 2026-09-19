#include <iostream>

int insertPos(int arr[],  int *n, int val, int pos) {

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;

}

int main() {

    int arr[4] = {3, 2, 1};

    int n = 3;

    int pos=0, val=0;
    std::cout << "Enter the index you want to store the value at: ";
    std::cout << std::endl;
    std::cin >> pos;
    
    std::cout << "Enter the value you want to store : ";
    std::cout << std::endl;
    std::cin >> val;

    int insertPos(int arr[], int &n, int val, int pos);




    // int arr[4] = {2, 3, 4};
    // int ins = 5;
    // int size = sizeof(arr)/sizeof(int);
    // arr[size] = ins;

    // std::cout << arr[size]  << std::endl;

    return 0;
}