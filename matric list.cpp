#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices = 5; // Number of vertices in the graph

    // Create an adjacency list using a vector of vectors
    vector<vector<int>> adj(vertices);

    // Adding edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(0);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(2);
    adj[4].push_back(3);

    // Print the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << "Vertex " << i << ": ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
