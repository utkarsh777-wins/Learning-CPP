// seperate chaining
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {

    int size = 7;
    vector<list<int>> table(size);

    int keys[] = {15,11, 27,8,12,22,29,1};
    int n = sizeof(keys)/sizeof(keys[0]);

    for (int i=0; i<n; i++) {
        int idx = keys[i]%size;
        table[idx].push_back(keys[i]);
    }

    for (int i=0; i<size; i++) {
        cout << i << "->";
        for(int x:table[i]) {
            cout << x << "->";
        }
        cout << endl;
    }
}