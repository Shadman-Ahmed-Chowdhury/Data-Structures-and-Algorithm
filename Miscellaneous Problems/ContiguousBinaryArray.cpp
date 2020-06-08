/**

Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1

Input: [0,1]
Output: 2
Explanation: [0,1] is the longest contiguous subarray with
equal numbers of 0 and 1.

**/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> nums;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    unordered_map <int, int> prefix;
    int sum = 0;
    int ans = 0;
    prefix[0] = -1;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            sum += 1;
        }
        else
            sum += -1;
        if(prefix.find(sum) != prefix.end()) {
            ans = max(ans, i - prefix[sum]);
           // cout <<i << " " << ans << " " << prefix[sum] << " " << sum << endl;
        }
        else
            prefix[sum] = i;
    }
    cout << ans << endl;

    return 0;
}

/**

Input:

5
1 0 1 0 1

Output:
4


**/

