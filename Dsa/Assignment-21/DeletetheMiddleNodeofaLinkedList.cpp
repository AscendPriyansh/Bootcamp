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
    Delete the middle node and return the head of the modified list.
    The middle node is the floor(n / 2)-th node (0-indexed).
*/

Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    int n = 0;
    Node* ptr = head;

    while (ptr != nullptr) {
        n++;
        ptr = ptr->next;
    }

    int mid = n / 2;

    ptr = head;
    for (int i = 1; i < mid; i++) {
        ptr = ptr->next;
    }

    Node* temp = ptr->next;
    ptr->next = temp->next;
    delete temp;

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

    ll.head = deleteMiddle(ll.head);

    Node* cur = ll.head;

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
