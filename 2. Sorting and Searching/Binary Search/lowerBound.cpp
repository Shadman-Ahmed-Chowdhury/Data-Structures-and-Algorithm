//From a sorted list, find the first value >=x

#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector <int> arr, int target) {
    int mid;
    int ans = -1;
    int lo = 0;
    int hi = arr.size() - 1;
    while(lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if(arr[mid] >= target) {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector <int> sortedList;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sortedList.push_back(a);
    }
    int val;
    cin >> val;
    int id = lowerBound(sortedList, val);
    cout << sortedList[id] << endl;
    return 0;
}
/**
Input:
7
2 3 5 6 8 10 12
4
Output:
5

Input:
7
2 3 5 6 8 10 12
9
Output:
10

**/

