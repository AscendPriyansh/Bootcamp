#include<bits/stdc++.h>
using namespace std;

bool Maximize(vector<long long>& v, long long time, int k) {
    int n = v.size();

    int painters = 1;
    long long work = 0;

    for(int i=0; i<n; i++) {
        if(work + v[i] <= time) {
            work += v[i];
        }
        else {
            painters++;
            work = v[i];
        }
    }

    return painters<=k;
}

long long BinarySearch(vector<long long>& v, int k, long long max, long long sum) {
    int n = v.size();

    long long low = max;
    long long high = sum;
    long long store = -1;

    while(low<=high) {
        long long mid = low + (high - low)/2;

        if(Maximize(v, mid, k)) {
            high = mid - 1;
            store = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return store;
}

int main() {
    int n, k;
    cin>>n>>k;
    vector<long long> v(n);
    long long sum=0;
    long long max = LLONG_MIN;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
        if(v[i]>max) {
            max = v[i];
        }
    }

    long long result = BinarySearch(v, k, max, sum);
    cout<<result;

    return 0;
}