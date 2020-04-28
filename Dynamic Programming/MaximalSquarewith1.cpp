/**

Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input:

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4

**/


#include <bits/stdc++.h>

using namespace std;

int maximalSquare(vector<vector<char>>& matrix)
{
    int n = matrix.size();
    if(n == 0 || matrix[0].empty())
        return 0;
    int m = matrix[0].size();
    vector <vector <int> > dp(n, vector <int>(m));
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == '1') {
                dp[i][j] = 1;
                if(i > 0 && j > 0) {
                    dp[i][j] += min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
                ans = max(ans, dp[i][j]);
            }
        }
    }
    return ans * ans;

}

int main()
{
    vector < vector <char> > matrix;

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        vector <char> v;
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            v.push_back(ch);
        }
        matrix.push_back(v);
    }

    cout << maximalSquare(matrix) << endl;
    return 0;
}

/**

Input:

4 5
10100
10111
11111
10010

Output:

4

**/
