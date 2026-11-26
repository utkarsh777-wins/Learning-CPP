// Implementation of DFS

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// void dfs(vector<vector<int>> &adj, int start)
// {
//     vector<bool> visited(adj.size(), false);
//     stack<int> s;

//     visited[start] = true;
//     s.push(start);

//     while(s.top() != -1) {
//         int node = s.top();
//         s.pop();
//         cout << node << " ";

//         for (int n : adj[node]) {
//             if (!visited[n]) {
//                 visited[n] = true;
//                 s.push(n);
//             }

//         }
//     }

// }


int main() {

    vector<vector<int>> adj = {     // adjacency list 
        {1, 2}, // 0
        {0, 3, 4},  // 1
        {0, 4},
        {1, 5},
        {1, 2, 5},
        {3, 4}  
    };

    cout << "The dfs traversal is\n";
    int start = 0;
    vector<bool> visited(adj.size(), false);
    stack<int> st;
    st.push(start);
    while(!st.empty()) {
        int node = st.top();
        st.pop();

        if(visited[node]) continue;

        visited[node] = true;

        cout << node << " ";

        for (int i = adj[node].size() - 1; i>=0; i--) {
            int nb = adj[node][i];
            if (!visited[nb]) {
                st.push(nb);
            }
        }
        cout << endl;
    }


    return 0;


}