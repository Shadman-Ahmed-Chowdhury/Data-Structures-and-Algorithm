/**


Given a 2d grid map of '1's (land) and '0's (water), count the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1

**/


#include <bits/stdc++.h>

using namespace std;

vector<vector <char> > grid;


void bfs(vector <vector <char>> &grid, int i, int j) {
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0')
        return;

    grid[i][j] = '0';
    bfs(grid, i + 1, j);
    bfs(grid, i - 1, j);
    bfs(grid, i, j + 1);
    bfs(grid, i, j - 1);
}
int numIslands(vector<vector<char>>& grid) {
    int cnt = 0;

    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            if(grid[i][j] == '1') {
                cnt++;
                bfs(grid, i, j);
            }
        }
    }
    return cnt;
}



int main()
{


    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        vector <char> v;
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            v.push_back(ch);
        }
        grid.push_back(v);
    }
    cout << numIslands(grid) << endl;

    return 0;
}

/**

Input:

4 5
11110
11010
11000
00000

Output:

1



**/
