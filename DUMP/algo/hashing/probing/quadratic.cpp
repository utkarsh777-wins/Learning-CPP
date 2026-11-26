// Linear probing 
#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 10;
int table[SIZE];

void insertKey(int key) {
    int h = key%SIZE;
    for (int i=0; i<SIZE; i++) {
        int idx = (h + i*i)%SIZE;
        if (table[idx] == -1) {
            table[idx] = key;
            return;
        }
    }
}

void display() {
    for (int i=0; i<SIZE; i++) {
        cout << i << "->" << table[i] << endl;
    }
}

int main() {
    fill(table, table+SIZE, -1);
    int arr[] = {23, 43, 13, 27, 37};
    for (int x:arr) {
        insertKey(x);
    }

    display();

}