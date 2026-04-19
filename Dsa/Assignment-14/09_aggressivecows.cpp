#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long>& v, long long gap, int k) {
    int n = v.size();
    int cowplaced = 1;
    long long prev = v[0];

    for(int i=1; i<n; i++) {
        if(v[i] - prev >= gap) {
            cowplaced++;
            prev = v[i];
        }
    }

    return cowplaced>=k;
}

long long BinarySearch(vector<long long>& v, int k) {
    int n = v.size();
    long long low = 0;
    long long high = v[n-1] - v[0];
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(possible(v, mid, k)) {
            store = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return store;
}

int main() {
    int n, k;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    long long result = BinarySearch(v, k);
    cout<<result;

    return 0;
}