/**
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.

**/

#include <bits/stdc++.h>
using namespace std;


class MinStack {
public:
    stack <int> s1;
    stack <int> s2;
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        s1.push(x);
        if(s2.empty())
            s2.push(x);
        else
            s2.push(min(s2.top(), x));
    }

    void pop() {
        s1.pop();
        s2.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};
// Driver Code
int main()
{

    MinStack* obj = new MinStack();

    obj->push(3);
    obj->push(5);
    cout << obj->getMin() << endl;
    obj->push(2);
    obj->push(1);
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->getMin() << endl;



	return 0;
}

/**

3
1
2
**/

