#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x; 
    cin >> n >> x;

    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    unordered_map<long long, long long> mp;
    long long ans = 0;

    for (int k = 2; k < n - 1; k++) {
        int j = k - 1;

        for (int i = 0; i < j; i++) {
            mp[A[i] - 2 * A[j]]++;
        }

        for (int l = k + 1; l < n; l++) {
            long long need = x - 3 * A[k] + 4 * A[l];
            ans += mp[need];
        }
    }

    cout << ans << '\n';
    return 0;
}