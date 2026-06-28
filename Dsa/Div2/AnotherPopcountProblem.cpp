#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long n, k;
            cin >> n >> k;

            long long X = n / k;
            long long m = 0;
            
            while ((1LL << (m + 1)) <= X + 1) {
                m++;
            }

            long long full_layer_bits = m * k;
            long long consumed_sum = k * ((1LL << m) - 1);
            long long remaining_sum = n - consumed_sum;
            
            long long extra_bits = remaining_sum / (1LL << m);
            
            if (extra_bits > k) {
                extra_bits = k;
            }

            cout << full_layer_bits + extra_bits << "\n";
        }
    }
    return 0;
}