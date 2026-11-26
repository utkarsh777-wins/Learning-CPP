// Implementation of BFS
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &adj, int start)
{
    vector<bool> visited(adj.size(), false);
    queue<int> q;

    // marking the visited node 
    visited[start] = true;
    q.push(start);

    // q should be empty that's how we will know each node ahas been visited
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int n : adj[node]) {
            if (!visited[n]) {
                visited[n] = true;
                q.push(n);
            }

        }
    }
}

int main() {

    vector<vector<int>> adj = {     // adjacency list 
        {1, 2}, // 0
        {0, 3, 4},  // 1
        {0, 4},
        {1, 5},
        {1, 2, 5},
        {3, 4}  
    };

    cout << "The bfs traversal is\n";
    bfs(adj, 0);


    return 0;


}

/*

     0
    / \
   1  2
  /\ /\
 3 4 5 


*/