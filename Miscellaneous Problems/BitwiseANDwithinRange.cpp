/**

Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: [5,7]
Output: 4
Example 2:

Input: [0,1]
Output: 0

**/

#include <bits/stdc++.h>

using namespace std;

int rangeBitwiseAnd(int m, int n) {
    int cnt = 0;

    while(m < n) {
        m = m >> 1;
        n = n >> 1;
        cnt++;
    }
    return m << cnt;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << rangeBitwiseAnd(m, n) << endl;
    return 0;
}


/**

Input:

5 7

Output:

4

**/
