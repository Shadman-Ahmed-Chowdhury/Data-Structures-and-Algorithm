/**

Coin Change Variant 2
** In this problem, we can choose the coins as many times we want.
but 3 = 1 + 2 and 3 = 2 + 1 are two solutions

Input: amount = 3, coins = [1, 2, 5]
Output: 3
Explanation: there are three ways to make up the amount:

3 = 1 + 1 + 1
3 = 1 + 2
3 = 2 + 1

**/

#include <bits/stdc++.h>

using namespace std;

int change(int amount, vector<int>& coins) {
    vector <int> way(amount + 1);
    way[0] = 1;
    for(int i = 1; i <= amount; i++) {
        for(int j = 0; j < coins.size(); j++) {
            if(i >= coins[j])
                way[i] += way[i - coins[j]];
        }
    }
    return way[amount];
}
int main()
{
    int n;
    vector <int> coins;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        coins.push_back(a);
    }
    int amount;
    cin >> amount;
    cout << change(amount, coins) << endl;
    return 0;
}

/**
Input

3   // Number of coins
1 2 5  //Coins of different denominations
3 //Required Amount

Output
3

**/


