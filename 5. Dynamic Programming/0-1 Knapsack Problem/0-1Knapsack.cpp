

#include <bits/stdc++.h>

using namespace std;

int knapsack(int weight, vector <int> wt, vector <int> val, int n) {
    vector <vector<int>> sack(n + 1, vector<int> (weight + 1));
    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= weight; w++) {
            if(i == 0 || w == 0)
                sack[i][w] = 0;
            else if(wt[i - 1] <= weight)
                sack[i][w] = max(val[i - 1] + sack[i - 1][w - wt[i - 1]], sack[i - 1][w]);
            else
                sack[i][w] = sack[i - 1][w];
        }
    }
    return sack[n][weight];
}

int main()
{
    vector <int> val, wt;
    int weight, n;
    cin >> n >> weight;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        val.push_back(a);
        wt.push_back(b);
    }
    cout << knapsack(weight, wt, val, n) << endl;
    return 0;
}

/**
Input:
3 50 // number of items and weight of the sack respectively
60 10
100 20
120 30

Output:
220

**/
