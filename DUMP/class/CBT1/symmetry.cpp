#include <iostream>

using namespace std;

class Symmetry {
private:
    int arr[100][100];
    void takeInput(int n) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin >> arr[i][j];
            }
        }
    }
public:
    void checkSymmetry(int n) {
        // int transpose[100][100];
        cout << "TRANS Matrix : " << endl;

        bool isSymmetric = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << arr[j][i];
                if (arr[i][j] != arr[j][i]) {
                    isSymmetric = false;
                }
            }
            cout << endl;
        }
        
        if(isSymmetric) cout << "The given MATRIX has an aspect of symmetry to it" << endl;
        else cout << "The given MATRIX has a cruel flaw of asymmetry in it []" << endl; 
        
    }
    void printArr(int n) {
        takeInput(n);
        for(int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
};


int main() {


    int n=4;

    Symmetry exists;
    
    // takeInput(arr, n);
    cout << "OG Matrix : " << endl;

    exists.printArr(n);
    exists.checkSymmetry(n);


    return 0;

}


/*

Sample input:

1  2  3  4
2  5  6  7
3  6  8  9
4  7  9  10

1  2  3
2  4  5
3  5  6

*/