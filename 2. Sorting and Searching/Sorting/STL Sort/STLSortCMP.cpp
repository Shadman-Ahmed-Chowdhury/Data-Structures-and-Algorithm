#include <bits/stdc++.h>

using namespace std;
struct Point
{
    int x;
    int y;
};
bool cmp(Point A, Point B) {
    if(A.x != B.x)
        return A.x < B.x;
    return A.y < B.y;
}
int main()
{
    int n;
    cin >> n;
    vector <Point> v;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << endl;
    }

    return 0;
}


/**
Input:

4
1 3
1 4
1 2
6 8

Output:
1 2
1 3
1 4
6 8
**/
