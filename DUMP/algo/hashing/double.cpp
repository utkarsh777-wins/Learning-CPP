// double hashinng 
#include <iostream>

using namespace std;

int main() {

    int size = 11;
    int prime = 7;
    int table[11];

    for (int i=0; i<size; i++) {
        table[i] = -1;
    }

    int keys[] = {19,27,36,10,64,22,33};
    int n = sizeof(keys)/sizeof(keys[0]);

    for (int k=0; k<n; k++) {
        int key = keys[k];
        int h1 = key%size; //first hash function
        int h2 = prime - (key%prime);

        for (int i=0; i<size; i++) {
            int idx = (h1+i*h2)%size;
            if(table[idx] == -1) {
                table[idx] = key;
                break;
            }
        }
    }

    for(int i=0; i<size; i++) {
        cout << i << "->";
        if (table[i] == -1) {
            cout << "empty";
        } else {
            cout << table[i];
        }
        cout << endl;
    }

    return 0;

}