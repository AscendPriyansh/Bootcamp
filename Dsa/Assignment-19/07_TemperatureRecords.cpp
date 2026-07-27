#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> count(101, 0);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        count[temp + 50]++;
    }

    bool first = true;
    for (int i = 0; i <= 100; ++i) {
        while (count[i] > 0) {
            if (!first) cout << " ";
            cout << (i - 50);
            first = false;
            count[i]--;
        }
    }
    cout << "\n";

    return 0;
}