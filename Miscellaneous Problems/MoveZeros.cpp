#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[cnt] = arr[i];
            cnt++;
        }
    }
    while(cnt < n) {
        arr[cnt] = 0;
        cnt++;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
