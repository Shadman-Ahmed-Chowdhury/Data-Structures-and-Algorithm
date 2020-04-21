/**


Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

**/

#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        int lo = 0;
        int hi = nums.size() - 1;

        while(lo < hi) {
            int mid = (lo + hi) / 2;
            if(nums[mid] > nums[hi])
                lo = mid + 1;
            else
                hi = mid;
        }

        int start = lo;

        lo = 0;
        hi = nums.size() - 1;

        if(target >= nums[start] && target <= nums[hi])
            lo = start;
        else
            hi = start - 1;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target) {
                hi = mid - 1;
            }
            else
                lo = mid + 1;
         }
         return -1;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i< n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int t;
    cin >> t;
    cout << search(v, t) << endl;
    return 0;
}

/**

Input:

7
4 5 6 8 0 1 2
0

Output:

4

**/
