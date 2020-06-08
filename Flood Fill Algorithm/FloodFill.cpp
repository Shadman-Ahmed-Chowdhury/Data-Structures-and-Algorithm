/**
An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

Example 1:
Input:
image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation:
From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected
by a path of the same color as the starting pixel are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected
to the starting pixel.

**/

#include <bits/stdc++.h>

using namespace std;

void floodFillUtil(vector <vector <int> > &image, int m, int n, int x, int y, int prevColor, int newColor) {
    if(x < 0 || x >= m || y < 0 || y >= n)
        return;
    if(image[x][y] != prevColor)
        return;
    if(image[x][y] == newColor)
        return;

    image[x][y] = newColor;
    floodFillUtil(image, m, n, x + 1, y, prevColor, newColor);
    floodFillUtil(image, m, n, x - 1, y, prevColor, newColor);
    floodFillUtil(image, m, n, x, y + 1, prevColor, newColor);
    floodFillUtil(image, m, n, x, y - 1, prevColor, newColor);
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int m = image.size();
    int n = image[0].size();
    //cout << m << " " << n << endl;
    int prevColor = image[sr][sc];
    floodFillUtil(image, m, n, sr, sc, prevColor, newColor);

    return image;
}

int main()
{
    vector <vector <int> > image, result;

    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++) {
        vector <int> row;
        for(int j = 0; j < c; j++) {
            int a;
            cin >> a;
            row.push_back(a);
        }
        image.push_back(row);
    }
    result = floodFill(image, 1, 1, 2);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/**
Input :

3 3
1 1 1
1 1 0
1 0 1

Output:

2 2 2
2 2 0
2 0 1

**/

