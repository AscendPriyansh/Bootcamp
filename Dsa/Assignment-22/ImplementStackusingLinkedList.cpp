#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the class below, using a singly linked list.
    void push(int x) -- insert x onto the top of the stack.
    int  pop()       -- remove and return the top element; return -1 if empty.
    int  top()       -- return the top element; return -1 if empty.
    bool empty()     -- return true if the stack is empty, else false.
    int  size()      -- return the number of elements in the stack.
    Every operation must run in O(1) time.
*/
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int size;

    LinkedList()
    {
        this->head = NULL;
        this->size = 0;
    }

    void addToHead(int val)
    {
        Node *myNode = new Node(val);
        myNode->next = head;
        head = myNode;
        size++;
    }

    int removeFromHead() {
        Node* popNode = head;

        if(head==nullptr) {
            return -1;
        }

        head=head->next;
        size--;
        return popNode->val;
    }

    int peep() {
        return (head==nullptr)? -1: head->val;
    }

    bool empty() {
        return size==0;
    }

    int sizeLL() {
        return size;
    }

};

class MyStack
{
    LinkedList list;

public:
    void push(int x)
    {
        list.addToHead(x);
    }

    int pop()
    {
        return list.removeFromHead();
    }

    int top()
    {
        return list.peep();
    }

    bool empty()
    {
        return list.empty();
    }

    int size()
    {
        return list.sizeLL();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyStack st;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
        {
            cout << st.pop() << '\n';
        }
        else if (op == "top")
        {
            cout << st.top() << '\n';
        }
        else if (op == "empty")
        {
            cout << (st.empty() ? "true" : "false") << '\n';
        }
        else // size
        {
            cout << st.size() << '\n';
        }
    }

    return 0;
}