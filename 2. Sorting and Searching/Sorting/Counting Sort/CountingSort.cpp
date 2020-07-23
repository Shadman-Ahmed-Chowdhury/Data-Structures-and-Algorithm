
#include <bits/stdc++.h>

using namespace std;
vector <int> ans;
void counting_sort(vector <int> v, int mx) {
    vector <int> cnt(mx + 1);
    for(int i = 0; i < v.size(); i++) {
        cnt[v[i]]++;
    }


    for(int i = 0; i <= mx; i++) {
        if(cnt[i] > 0) {
            for(int j = 0; j < cnt[i]; j++) {
                ans.push_back(i);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    int mx = -1;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mx = max(mx, a);
        v.push_back(a);
    }
    counting_sort(v, mx);
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
