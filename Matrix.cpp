#include <iostream>
using namespace std;

int main() {
    int vertices = 5; // Number of vertices in the graph
    int adjacencyMatrix[5][5] = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };
    cout << "Adjacency Matrix:" << endl;
   // for (int i = 0; i < vertices; i++) {
       //for (int j = 0; j < vertices; j++) {
           cout << adjacencyMatrix[i][j] << " ";

        cout << endl;
    }
return 0;
}
