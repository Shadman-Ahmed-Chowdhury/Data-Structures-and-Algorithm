
/**

Coin Change Variant 3
** In this problem, we can choose any coin only once

Input: amount = 3, coins = [1, 2, 5]
Output: Possible
Explanation: It is possible to make the amount by using any coin only once

3 = 1 + 2
3 = 2 + 1

**/

#include <bits/stdc++.h>

using namespace std;

int change(int amount, vector<int>& coins){
    vector <int> dp(amount + 1);
    dp[0] = 1;
    for(int j = 0; j < coins.size(); j++) {
        for(int i = amount; i >= 1; i--) {
            if(i >= coins[j] && dp[i - coins[j]])
                dp[i] = 1;
        }
    }
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
    if(change(amount, coins))
        cout << "Possible\n";
    else
        cout << "Not Possible\n";
    return 0;
}

/**
Input

3   // Number of coins
1 2 5  //Coins of different denominations
4 //Required Amount

Output
Not Possible

**/


