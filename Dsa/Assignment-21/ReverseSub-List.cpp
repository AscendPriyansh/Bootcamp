#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node *tail = nullptr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node *node = new Node(x);

            if (!head)
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
    Reverse the nodes from position left to right (1-indexed, inclusive)
    and return the head of the modified list.
*/

Node *reverseBetween(Node *head, int left, int right)
{
    if (!head || left == right)
        return head;

    Node *start = head;
    Node *beforeStart = nullptr;

    for (int i = 0; i < left - 1; i++)
    {
        beforeStart = start;
        start = start->next;
    }

    Node *end = head;
    Node *afterEnd = nullptr;

    for (int i = 0; i < right - 1; i++)
    {
        end = end->next;
        afterEnd = end;
    }
    afterEnd = afterEnd->next;

    Node *prev = nullptr;
    Node *curr = start;
    Node *fut = nullptr;

    while (curr != afterEnd)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }

    if (beforeStart != nullptr)
    {
        beforeStart->next = prev;
    }
    else
    {
        head = prev;
    }
    start->next = afterEnd;

    return head;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int left, right;
    cin >> left >> right;

    ll.head = reverseBetween(ll.head, left, right);

    Node *cur = ll.head;

    bool first = true;

    while (cur)
    {
        if (!first)
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