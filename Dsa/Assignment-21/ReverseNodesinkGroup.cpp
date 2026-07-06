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
    Reverse the nodes of the list k at a time and return the new head.
    If the number of nodes is not a multiple of k, the leftover nodes at the
    end remain in their original order.
*/

Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;

        Node* dummyNode = new Node(0);
        Node* prev = dummyNode;

        while (temp != nullptr) {
            Node* first = temp;
            Node* curr = temp;

            int store = k;

            while (store>0 && curr != nullptr) {
                curr = curr->next;
                store--;
            }

            if (store > 0) {
                prev->next = first;
                break;
            }

            Node* past = nullptr;
            Node* present = first;
            Node* future = nullptr;

            while (present != curr) {
                future = present->next;
                present->next = past;
                past = present;
                present = future;
            }
            prev->next = past;
            prev = first;
            temp = curr;
        }

        Node* result = dummyNode->next;
        delete dummyNode;
        return result;
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int k;
    cin >> k;

    ll.head = reverseKGroup(ll.head, k);

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