#include <bits/stdc++.h>

using namespace std;
#define mx 100000

int parent[mx];

void make_set(int u) {
    parent[u] = u;
    return;
}
void init_disjoint_set(int n) {
    for(int i = 0; i < n; i++)
        make_set(i);
    return;
}
int find_representative(int r) {
    if(parent[r] == r)
        return r;
    parent[r] = find_representative(parent[r]);
    return parent[r];
}
void set_union(int u, int v) {
    int rep_u = find_representative(u);
    int rep_v = find_representative(v);

    if(rep_u != rep_v) {
        parent[rep_u] = rep_v;
    }
    return;
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    init_disjoint_set(nodes);
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        set_union(u, v);
    }
    set <int> numRepresentative;
    for(int i = 0; i < nodes; i++) {
        numRepresentative.insert(find_representative(i));
    }
    cout << numRepresentative.size() << endl;
    return 0;
}

/**Input

5 4
0 1
2 4
1 3
4 2

Output

2

**/

