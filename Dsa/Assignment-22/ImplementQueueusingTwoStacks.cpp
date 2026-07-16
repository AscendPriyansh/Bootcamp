#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the class below (a queue backed by two stacks).
    void push(int x) -- insert x at the back.
    int  pop()       -- remove and return the front element; -1 if empty.
    int  front()     -- return the front element; -1 if empty.
    int  back()      -- return the last element; -1 if empty.
    bool empty()     -- return true if the queue is empty, else false.
    int  size()      -- return the number of elements.
    All operations must run in O(1).
*/

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int back_val = -1; 

    MyQueue()
    {
    }

    void transfer()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

    void push(int x)
    {
        s1.push(x);
        back_val = x; 
    }

    int pop()
    {
        if (empty()) return -1; 
        transfer();
        int store = s2.top();
        s2.pop();
        return store;
    }

    int front()
    {
        if (empty()) return -1; 
        transfer();
        return s2.top();
    }

    int back() {
        if (empty()) return -1; 
        return back_val;
    }

    bool empty()
    {
        return s2.empty() && s1.empty();
    }

    int size() {
        return s1.size() + s2.size();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyQueue que;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            que.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
            cout << que.pop() << '\n';
        else if (op == "front")
            cout << que.front() << '\n';
        else if (op == "back")
            cout << que.back() << '\n';
        else if (op == "empty")
            cout << (que.empty() ? "true" : "false") << '\n';
        else // size
            cout << que.size() << '\n';
    }

    return 0;
}