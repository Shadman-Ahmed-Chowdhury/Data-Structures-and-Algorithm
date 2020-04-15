/**

You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:

direction can be 0 (for left shift) or 1 (for right shift).
amount is the amount by which string s is to be shifted.
A left shift by 1 means remove the first character of s and append it to the end.
Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.
Return the final string after all operations.



Example 1:

Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation:
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"

**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < vector <int> > v;
    for(int i = 0; i < n; i++) {
        vector <int> v1;
        for(int j = 0; j < 2; j++) {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }
    string str;
    cin >> str;
    for(int i = 0; i < v.size(); i++) {
        int a = v[i][0];
        int b = v[i][1];
        if(a == 1) {
            string newStr = "";
            for(int j = str.size() - b; j < str.size(); j++) {
                newStr += str[j];
            }
            str.erase(str.size() - b, b);
            //cout << newStr << endl;
            str = newStr + str;
            //cout << str << endl;
        }
        else {
            string newStr = "";
            for(int j = 0; j < b; j++) {
                newStr += str[j];
            }
            //cout << newStr << endl;
            str.erase(0, b);
            str = str + newStr;
            //cout << str << endl;
        }
    }
    cout << str << endl;

    return 0;
}

/**

Input:

2
0 1
1 2
abc

Output:
cab

**/

