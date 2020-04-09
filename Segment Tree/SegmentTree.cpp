#include <bits/stdc++.h>

using namespace std;
#define mx 100001

int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //irrelevant segment
    if (b >= i && e <= j)
        return tree[node]; //Relevant Segment

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; // Irrelevant segment
    if (b >= i && e <= i) {
        //Relevant Segment
        tree[node] = newvalue;
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    //example array
    //7
    //4 -9 3 7 1 0 2
    init(1, 1, n);
    /* For testing the segment tree
    for(int i = 0; i < n * 2; i++) {
        cout << tree[i] << " ";
    }*/
    cout << endl;
    //sum of index 2 to 6
    int sum = query(1, 1, n, 2, 6); //sum = 2
    cout << sum << endl;

    update(1, 1, n, 3, 2);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int newSum = query(1, 1, n, 2, 6);
    cout << newSum << endl;

    return 0;
}
