// Linear probing 
#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 10;
int table[SIZE];

void insertKey(int key) {
    int index = key%SIZE;
    int start = index;

    while (table[index] != -1) {
        index = (index+1)%SIZE;
        
        if(index == start) {
            cout << "Hash table is full" << endl;
            return;;
        }
    }

    table[index] = key;
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