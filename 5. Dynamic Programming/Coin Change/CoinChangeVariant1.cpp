/**

Coin Change Variant 1
** In this problem, we can choose the coins as many times we want.
Input: amount = 3, coins = [1, 2, 5]
Output: Possible
Explanation: It is possible to make the amount 3(1 + 2 or 2 + 1)


**/

#include <bits/stdc++.h>

using namespace std;

bool change(int amount, vector<int>& coins) {
    vector <int> possible(amount + 1);
    possible[0] = 1;
    for(int i = 1; i <= amount; i++) {
        for(int j = 0; j < coins.size(); j++) {
            if(i >= coins[j])
                possible[i] |= possible[i - coins[j]];
        }
    }
    if(possible[amount] == 1)
        return true;
    else
        return false;
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
        cout << "Possible\n" << endl;
    else
        cout << "Not Possible\n" << endl;
    return 0;
}

/**
Input

3   // Number of coins
1 2 5  //Coins of different denominations
3 //Required Amount

Output
Possible

**/

