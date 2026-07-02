#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        for (int y = 2; y <= 100000; ++y) {
            int y_mask = 0;
            int temp_y = y;
            while (temp_y > 0) {
                y_mask |= (1 << (temp_y % 10));
                temp_y /= 10;
            }

            if (__builtin_popcount(y_mask) <= 2) {
                long long prod = x * y;
                int prod_mask = 0;
                while (prod > 0) {
                    prod_mask |= (1 << (prod % 10));
                    prod /= 10;
                }

                if (__builtin_popcount(prod_mask) <= 2) {
                    cout << y << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}