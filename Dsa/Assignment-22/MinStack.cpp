#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the class below.
*/
class MinStack {
public:
    stack<pair<long long, long long>> s;
    long long mini=INT_MAX;

    void push(long long x) {
        if(s.empty()) {
            s.push({x, x});
        }
        else {
            s.push({x, min(x, s.top().second)});
        }
    }

    void pop() {
        if(!s.empty()) {
            s.pop();
        }
    }

    long long top() {
        if(!s.empty()) return s.top().first;

        return -1;
    }

    long long getMin() {
        if (!s.empty()) {
            return s.top().second;
        }
        return -1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    MinStack st;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;
            st.push(x);
        } else if (type == 2) {
            st.pop();
        } else if (type == 3) {
            cout << st.top() << "\n";
        } else {
            cout << st.getMin() << "\n";
        }
    }

    return 0;
}