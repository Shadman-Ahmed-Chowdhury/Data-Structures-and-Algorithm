/**

Coin Change Variant 1

Input: amount = 5, coins = [1, 2, 5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

**/

#include <bits/stdc++.h>

using namespace std;

int change(int amount, vector<int>& coins) {
    vector <int> nways(amount + 1);
    nways[0] = 1;
    for(int i = 0; i < coins.size(); i++) {
        int k = 0;
        for(int j = coins[i]; j <= amount; j++) {
            nways[j] = nways[j] + nways[k++];
        }
    }
    return nways[amount];
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
5 //Required Amount

Output
4

**/

