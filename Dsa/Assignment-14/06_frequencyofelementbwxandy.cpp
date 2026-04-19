#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> BinarySearch(vector<long long>& v, long long x, long long y) {
    int n = v.size();

    long long low = 0;
    long long high = n - 1;
    long long store1 = -1, store2 = -1;
    
    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(v[mid] >= x) {
            high = mid - 1;
            store1 = mid;
        }        
        else if(v[mid] < x) {
            low = mid + 1;
        }
    }   
    
    low = 0;
    high = n-1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(v[mid] <= y) {
            low = mid + 1;
            store2 = mid;
        }        
        else if(v[mid] > y) {
            high = mid - 1;
        }
    } 

    return {store1, store2};
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
        long long x, y;
        cin>>x>>y;

        auto [first, last] = BinarySearch(v, x, y);
        
        if(first == -1 || first > last) cout<<0<<"\n";
        else cout<<last-first+1<<"\n";
    }

    return 0;
}