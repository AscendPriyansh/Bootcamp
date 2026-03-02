#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long diag_sum = 0;
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long x;
            cin >> x;

            total_sum += x;

            if (i == j || i + j == n - 1) {
                diag_sum += x;
            }
        }
    }

    cout << diag_sum << " " << total_sum - diag_sum << endl;

    return 0;
}