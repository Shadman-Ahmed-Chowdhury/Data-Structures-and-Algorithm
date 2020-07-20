//Adjacency Matrix Representaions.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V;
    cin >> V; //Number of vertices;
    int adj[V][V];  //Adjacency matrix to store the graph into memory.
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            cin >> adj[i][j];   // The value can be 0 or 1 or the weight of the edge.
        }
    }
    cout << endl;
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

