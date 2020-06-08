/**

Given a m x n grid filled with non-negative numbers,
find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1 - 3 - 1 - 1 - 1 minimizes the sum.

**/


#include <bits/stdc++.h>

using namespace std;


vector<vector <int> > grid;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector <vector <int>> dp(m, vector<int>(n, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] += grid[i][j];
            if(i > 0  && j > 0) {
                dp[i][j] += min(dp[i - 1][j], dp[i][j - 1]);
            }
            else if(i > 0) {
                dp[i][j] += dp[i - 1][j];
            }
            else if(j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }
    return dp[m - 1][n - 1];
}


int main()
{


    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        vector <int> v;
        for(int j = 0; j < m; j++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        grid.push_back(v);
    }
    cout << minPathSum(grid) << endl;

    return 0;
}

/**

Input:

3 3
1 3 1
1 5 1
4 2 1

Output:

7

**/


