#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long curr = 1;
    while(curr <= n) curr *= 2;
    curr /= 2;

    string ans = "";

    while(curr > 0) {
        if(curr <= n) {
            ans += '1';
            n -= curr;
        } else {
            ans += '0';
        }
        curr /= 2;
    }

    cout << ans;
    return 0;
}