///Dijkstra algorithm using queue(Adjacency list representation).
#include <bits/stdc++.h>

using namespace std;

#define inf 1e9

vector <pair <int, int> > v[100];
queue <int>  q;

void dijkstra(int n, int s) {
    int distance[100];
    for(int i=0; i<=n; i++) {
        distance[i] = inf;
    }
    distance[s] = 0;
    q.push(s);
    vector <pair <int, int> > :: iterator it;

    while(!q.empty()){
        int a = q.front();
        q.pop();
        for(it = v[a].begin(); it != v[a].end(); it++) {
            int b = it->first;
            int c = it->second;
            if(distance[a] + c < distance[b]) {
                distance[b] = distance[a] + c;
                q.push(b);
            }
        }
    }
    for(int i=1; i<=n; i++)
        printf("%d\n", distance[i]);
}
int main()
{
    int n, edges, a, b, c, source;
    scanf("%d%d", &n, &edges);
    for(int i=0; i<edges; i++) {
        scanf("%d%d%d", &a, &b, &c);
        v[a].push_back({b, c});
    }
    printf("Enter the source node: ");
    scanf("%d", &source);
    dijkstra(n, source);
    return 0;
}

/**

Input:

4 4
1 2 2
2 3 1
1 3 5
3 4 7
1

Output:

0
2
3
10

**/



