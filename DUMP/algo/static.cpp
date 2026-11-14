// #include <iostream> 
// using namespace std;

// int moveDisks(int n, char source, char auxiliary, char destination)
// {

//     if (n == 0) return 0;

//     int moves=0;

//     moves = moves + moveDisks(n-1, source, destination, auxiliary);

//     cout << "move disk " << n << " from rod " << source << " to rod " << destination << endl;

//     moves++;


// }

// int main()
// {

//     int m;
//     cin >> m;

//     int totalMoves = moveDisks(m, '1', '2', '3');

//     cout << totalMoves << endl;

//     return 0;

// }

#include <iostream>
#include <stdlib.h>

using namespace std;

struct tNode {
    int data;
    struct tNode* right;
    struct tNode* left;
};

struct tNode createBSTC(struct tNode*, int);
void inOrder(struct tNode*);
void preOrder(struct tNode*);
void postOrder(struct tNode*);

int main() {


    return 0;
    
}