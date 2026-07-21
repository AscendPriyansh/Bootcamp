#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> count(101, 0);

    for (int i = 0; i < n; ++i) {
        int age;
        cin >> age;
        count[age]++;
    }

    bool first = true;
    for (int age = 0; age <= 100; ++age) {
        while (count[age] > 0) {
            if (!first) {
                cout << " ";
            }
            cout << age;
            first = false;
            count[age]--;
        }
    }
    cout << "\n";

    return 0;
}