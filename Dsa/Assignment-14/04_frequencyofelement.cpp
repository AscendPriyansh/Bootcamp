#include<bits/stdc++.h> 
using namespace std;

long long BinarySearchFirst(vector<long long>& v, long long x) {
    int n = v.size();

    long long low = 0;
    long long high = n - 1;
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(v[mid] == x) {
            high = mid - 1;
            store = mid;
        }
        else if(v[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return store;
}

long long BinarySearchLast(vector<long long>& v, long long x) {
    int n = v.size();

    long long low = 0;
    long long high = n - 1;
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(v[mid] == x) {
            low = mid + 1;
            store = mid;
        }
        else if(v[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
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

        long long first = BinarySearchFirst(v, x);
        long long last = BinarySearchLast(v, x);
        
        if(first==-1) cout<<0<<"\n";
        else cout<<(last-first)+1<<"\n";
    }

    return 0;
}