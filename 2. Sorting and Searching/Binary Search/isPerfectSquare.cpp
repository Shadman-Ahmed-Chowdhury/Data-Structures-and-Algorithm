//To find a value is perfect square or not
// Using Binary Search

#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(int num) {
    int mid;
    int lo = 0;
    int hi = num;
    while(lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if(mid * mid == num)
            return true;
        else if(mid * mid < num)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if(isPerfectSquare(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


/**
Input:
9

Output:
YES

Input:
20

Output: NO;
**/
