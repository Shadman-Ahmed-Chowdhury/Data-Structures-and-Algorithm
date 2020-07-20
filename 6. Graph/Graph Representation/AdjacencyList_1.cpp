//Adjacency List Representaion.

//When the graph is undirected.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V, E; //V = Number of vertices and E = Number of edges.
    cin >> V >> E;
    vector <int> adj[V + 1];

    for(int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b; //There is an edge from 'a' to 'b' and from 'b' to 'a'.
        adj[a].push_back(b);
        adj[b].push_back(a); //Ommit this line if the graph is directed.
    }
    //For traversing the graph.
    for(int i = 1; i <= V; i++) {
        cout << i << " => ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

