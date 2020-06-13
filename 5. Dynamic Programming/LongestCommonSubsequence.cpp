/**

Given two strings text1 and text2, return the length of their longest common subsequence.

A subsequence of a string is a new string generated from the original string with some characters(can be none)
deleted without changing the relative order of the remaining characters.
(eg, "ace" is a subsequence of "abcde" while "aec" is not).
A common subsequence of two strings is a subsequence that is common to both strings.

If there is no common subsequence, return 0.

Example 1:

Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.

**/


#include <bits/stdc++.h>

using namespace std;

int longestCommonSubsequence(string text1, string text2) {
        int a = text1.size();
        int b = text2.size();
        int lcs[a + 1][b + 1];

        for(int i = 0; i <= a; i++) {
            for(int j = 0; j <= b; j++) {
                if(i == 0 || j == 0)
                    lcs[i][j] = 0;
                else if(text1[i - 1] == text2[j - 1]) {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                }
                else {
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
                }
            }
        }
        return lcs[a][b];

    }

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << longestCommonSubsequence(str1, str2) << endl;
    return 0;
}

/**

Input:

abcdef ace

Output:

4

**/

