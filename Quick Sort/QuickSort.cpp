//C++ implementation of Quick Sort Algorithm

#include <bits/stdc++.h>

using namespace std;


int partition(vector <int>& arr, int lo, int hi)
{
    int pivot = arr[hi];
    int i = (lo - 1);

    for(int j = lo; j <= hi - 1; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[hi]);
    return (i + 1);
}

void quickSort(vector <int>& arr, int lo, int hi) {
    if(lo < hi) {
        int pi = partition(arr, lo, hi);
        quickSort(arr, lo, pi - 1);
        quickSort(arr, pi + 1, hi);
    }
}

int main()
{
    int n;
    vector <int> arr;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    quickSort(arr, 0, n - 1);
    for(int a : arr)
        cout << a << " ";
    cout << endl;
    return 0;
}

/**


Input:

5
5 4 3 2 1

Output:

1 2 3 4 5

**/
