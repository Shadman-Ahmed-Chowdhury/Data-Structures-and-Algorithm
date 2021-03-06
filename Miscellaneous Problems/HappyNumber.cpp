/**
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy numbers.

Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

**/


#include <bits/stdc++.h>

using namespace std;

int func(int n) {
    int sum = 0;
    while(n) {
        int digit = n % 10;
        n = n / 10;
        sum += (digit * digit);
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set <int> s;
    while(true) {
        if(n == 1)
            return true;

        n = func(n);
        if(s.count(n) == 1)
            return false;
        s.insert(n);

    }
}

int main()
{
    int n;
    cin >> n ;
    if(isHappy(n)) {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}

/**

Input:

19

Output:

Yes

**/
