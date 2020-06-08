///A C++ implementation of Insertion sort algorithm

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //Insertion Sorting
    int x, j;
    for(int i = 0; i < n; i++) {
        x = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
