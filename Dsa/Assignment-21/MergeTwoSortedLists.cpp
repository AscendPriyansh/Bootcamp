#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList {
public:

    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node* tail = nullptr;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            if(!head)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
    }
};

/*
    Implement only the function below.
    Merge two sorted (non-decreasing) lists into one sorted list and return
    the head of the merged list. Either list may be empty (nullptr).
*/

Node* mergeTwoLists(Node* l1, Node* l2) {
    Node* first = l1;
    Node* second = l2;

    Node* dummyNode = new Node(0);
    Node* result = dummyNode;

    while(first!=nullptr && second!=nullptr) {
        if(first->val<=second->val) {
            dummyNode->next=first;
            first=first->next;
        }
        else {
            dummyNode->next=second;
            second=second->next;
        }
        dummyNode=dummyNode->next;
    }     

    if(first!=nullptr) {
        dummyNode->next=first;
    }

    if(second!=nullptr) {
        dummyNode->next=second;
    }

    return result->next;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1;
    cin >> n1;

    LinkedList a;
    a.build(n1);

    int n2;
    cin >> n2;

    LinkedList b;
    b.build(n2);

    Node* head = mergeTwoLists(a.head, b.head);

    Node* cur = head;

    bool first = true;

    while(cur)
    {
        if(!first)
        {
            cout << ' ';
        }

        first = false;

        cout << cur->val;

        cur = cur->next;
    }

    cout << '\n';

    return 0;
}