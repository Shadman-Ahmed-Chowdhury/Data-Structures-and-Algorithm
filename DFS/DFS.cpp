
#include <bits/stdc++.h>

using namespace std;

int visited[100];
vector <int> adj[100];
void dfs(int s);
int main()
{
    int n, s, edges, a, b;
    scanf("%d%d", &n, &edges);
    for(int i=0; i<edges; i++) {
        scanf("%d%d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    scanf("%d", &s);
    dfs(s);
    return 0;
}
void dfs(int u)
{
    if(visited[u])
        return;
    visited[u] = 1;
    printf("%d ", u);
    for(int v = 0; v < adj[u].size(); v++) {
        dfs(adj[u][v]);
    }

}
