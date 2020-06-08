/**

Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
Note:
The length of the array is in range [1, 20,000].
The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].

**/



#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector <int>& nums, int k)
{
    int count = 0;
    int sum = 0;
    map <int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if(mp.find(sum - k) != mp.end()) {
            count += mp[sum - k];
        }
        mp[sum]++;
    }
    return count;
}

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
    int k;
    cin >> k;
    cout << subarraySum(nums, k) << endl;
    return 0;
}

/**

Input:

3
1 1 1
2


Output:

2

**/

