#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector <int> arr, int val) {
    int mid;
    int lo = 0;
    int hi = arr.size() - 1;
    mid = (lo + hi) / 2;
    while(lo <= hi) {
        mid = (lo + hi) / 2;
        if(arr[mid] == val)
            return mid + 1;
        else if(arr[mid] < val)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
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

    cout << binarySearch(sortedList, val) << endl;
    return 0;
}
/**

Input:
3 // Number of elements
30 40 50 // Sorted List
50  // Value to find from the sorted list

Output:
3  // Value is at the 3rd position of the list

3 // Number of elements
30 40 50 // Sorted List
49  // Value to find from the sorted list

Output:
-1  // Value is not present in the sorted list

**/

