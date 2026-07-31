#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    sort(strings.begin(), strings.end(), [](const string &a, const string &b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });

    for (int i = 0; i < n; ++i) {
        cout << strings[i] << "\n";
    }

    return 0;
}