/**


We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)


Example:
[2, 7, 4, 1, 8, 1]
Output: 1
**/


#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector <int>& stones)
{
    if(stones.size() == 1)
        return stones[0];
    for(int i = 0; i < stones.size(); i++) {
        sort(stones.begin(), stones.end(), greater <int>());
        stones[0] = stones[0] - stones[1];
        stones[1] = 0;
    }
    if(stones[0] > 0)
        return stones[0];
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int a;
    vector <int> v;
    for(int i = 0; i <n; i++) {
        cin >> a;
        v.push_back(a);
    }
    cout << lastStoneWeight(v) << endl;
    return 0;
}


/**

Input:
6
2 7 4 1 8 1

Output:
1

**/
