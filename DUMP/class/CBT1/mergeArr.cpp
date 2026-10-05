#include <iostream>

using namespace std;

void takeInput(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

}
void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {

    int n=0, m=0;
    cin >> n;
    int arr1[n];
    takeInput(arr1, n);
    cin >> m;
    int arr2[m];
    takeInput(arr2, m);

    int res[n+m];

    return 0;
}