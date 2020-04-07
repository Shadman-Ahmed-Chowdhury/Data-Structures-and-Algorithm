/**
Given an array nums: [1, 0, 2, 5, 0, 3]
The program have to move all 0's to the end of it while maintaining the relative order of the non-zero elements in the same array.
[1, 2, 5, 3, 0, 0]

**/


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

/**

Input:

6
1 0 2 5 0 3

Output:

1 2 5 3 0 0

**/
