/**

Given an integer array arr, count element x such that x + 1 is also in arr.

If there're duplicates in arr, count them separately.

arr = [1, 2, 3]
Output: 2

**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int> s;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        s.insert(a);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s.count(v[i] + 1) == 1)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

/**

Input:

1 1 2 2

Output:

2

**/
