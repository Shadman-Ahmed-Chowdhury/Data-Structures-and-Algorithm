
/**

Coin Change Variant 1
** In this problem, we have to find the minimum number of coins to make the amount

Input: amount = 7, coins = [1, 2, 5]
Output: 2
Explanation:
all possible solutions
(1 + 1 + 1 + 1 + 1 + 1 + 1 = 7),
(1 + 1 + 1 + 1 + 1 + 2 = 7),
( 1 + 1 + 1 + 2 + 2 = 7),
(1 + 2 + 2 + 2 = 7),
( 2 + 5 = 7).
Therefore, minimum two coins are required to make the amount.

**/

#include <bits/stdc++.h>

using namespace std;

int change(int amount, vector<int>& coins){
    vector <int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for(int i = 1; i <= amount; i++) {
        for(int j = 0; j < coins.size(); j++) {
            if(i >= coins[j]) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    if(dp[amount] > amount)
        return -1;
    else
        return dp[amount];
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
7 //Required Amount

Output
2

**/


