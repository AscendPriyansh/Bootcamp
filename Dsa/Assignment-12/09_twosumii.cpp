#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    vector<long long> v(n);
    for(long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<long long, long long> mpp;

    for(long long i = 0; i < n; i++) {
        long long store = x - v[i];

        if(mpp.find(store) != mpp.end()) {
            cout << mpp[store] << " " << i + 1;
            return 0;
        }

        mpp[v[i]] = i + 1;
    }

    cout << -1;;
    return 0;
}