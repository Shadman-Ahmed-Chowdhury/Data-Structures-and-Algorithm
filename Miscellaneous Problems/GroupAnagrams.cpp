/**
Given an array of strings: ["eat", "tea", "tan", "ate", "nat", "bat"]

The program have to group all the anagrams together(The order of output doesn't matter):
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]


**/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    map <string, vector <string> > mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        string newStr = str;
        sort(newStr.begin(), newStr.end());
        mp[newStr].push_back(str);
    }
    vector <vector<string> > v;
    for(auto x : mp) {
        v.push_back(x.second);
    }
    for(auto v1 : v) {
        for(string a : v1) {
            cout << a << endl;
        }
    }
    cout << endl;
    return 0;
}

/**

Input:

6
eat tea tan ate nat bat

Output:

bat
tea
ate
eat
tan
nat

**/
