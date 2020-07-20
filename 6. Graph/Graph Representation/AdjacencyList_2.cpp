//Adjacency List Representaion.

//When the graph is weighted and directed.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V, E; //V = Number of vertices and E = Number of edges.
    cin >> V >> E;
    vector <pair<int, int>> adj[V + 1];

    for(int i = 0; i < E; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        //There is an edge from 'a' to 'b' with weight 'w'.
        adj[a].push_back({b, w});
    }
    //For traversing the graph.
    for(int i = 1; i <= V; i++) {
        cout << i << " => ";
        for(auto j : adj[i]){
            cout <<"(" << j.first << ", " << j.second << ") " ;
        }
        cout << endl;
    }
    return 0;
}


