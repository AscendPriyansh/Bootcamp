#include <bits/stdc++.h>
using namespace std;

struct Order {
    long long orderId;
    long long timestamp;
    long long priority;

    bool operator<(const Order& other) const {
        if (priority != other.priority) {
            return priority > other.priority;
        }
        if (timestamp != other.timestamp) {
            return timestamp < other.timestamp;
        }
        return orderId < other.orderId;
    }
};

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<Order> orders(n);
    for (int i = 0; i < n; ++i) {
        cin >> orders[i].orderId >> orders[i].timestamp >> orders[i].priority;
    }

    sort(orders.begin(), orders.end());

    for (int i = 0; i < n; ++i) {
        cout << orders[i].orderId << " " << orders[i].timestamp << " " << orders[i].priority << "\n";
    }

    return 0;
}