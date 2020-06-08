///A C++ implementation of bubble sort

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
    //Bubble Sort
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++)
            if(arr[j + 1] < arr[j])
                swap(arr[j + 1], arr[j]);
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

