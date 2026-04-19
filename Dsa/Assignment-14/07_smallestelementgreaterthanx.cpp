#include<bits/stdc++.h>
using namespace std;

long long BinarySearch(vector<long long>& v, long long x) {
    int n = v.size();

    long long low = 0;
    long long high = n - 1;
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(v[mid] >= x) {
            store = v[mid];
            high = mid - 1;
        }
        else if(v[mid] < x) {
            low = mid + 1;
        }
    }

    return store;
}

int main() {
    int n, q;
    cin>>n>>q;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    while(q--) {
        long long x;
        cin>>x;

        long long result = BinarySearch(v, x);
        cout<<result<<"\n";
    }


    return 0;
}