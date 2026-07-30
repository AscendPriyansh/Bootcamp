#include <bits/stdc++.h>
using namespace std;

bool compare(long long a, long long b) {
    long long last_digit_a = abs(a) % 10;
    long long last_digit_b = abs(b) % 10;
    
    if (last_digit_a != last_digit_b) {
        return last_digit_a < last_digit_b;
    }
    return a < b;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), compare);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    
    return 0;
}