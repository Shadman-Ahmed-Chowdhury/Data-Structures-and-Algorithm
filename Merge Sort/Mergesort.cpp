/// Implementation of MergeSort Algorithm in C++

#include <bits/stdc++.h>

using namespace std;
int num[101], temp[100];
void mergesort(int lo, int hi)
{
    if(lo == hi)
        return;
    int mid = (lo + hi) / 2;
    mergesort(lo, mid);
    mergesort(mid + 1, hi);
    int i, j, k;
    i = lo;
    j = mid + 1;
    for(k = lo; k <= hi; k++)
    {
        if(i == mid + 1)
            temp[k] = num[j++];
        else if(j == hi + 1)
            temp[k] = num[i++];
        else if(num[i] < num[j])
            temp[k] = num[i++];
        else
            temp[k] = num[j++];
    }
    for(k = lo; k <= hi; k++)
        num[k] = temp[k];
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    mergesort(0, n - 1);
    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}

/**

Input:

5
5 4 3 2 1

Output:

1 2 3 4 5

**/
