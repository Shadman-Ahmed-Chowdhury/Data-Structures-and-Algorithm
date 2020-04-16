/**

Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:

Input:  [1,2,3,4]
Output: [24,12,8,6]
Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).

Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)


**/

#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector <int> product;
    product.assign(nums.size(), 1);
    int temp = 1;
    for(int i = 0; i < nums.size(); i++) {
        product[i] = temp;
        temp *= nums[i];
    }
    temp = 1;
    for(int i = nums.size() - 1; i >= 0; i--) {
        product[i] *= temp;
        temp *= nums[i];
    }
    return product;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector <int> product = productExceptSelf(nums);
    for(int a : product) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}

/**

Input:

4
1 2 3 4

Output:

24 12 8 6

**/

