#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> v, long long time, long long k) {
    long long items=0;
    for(long long macTime : v) {
        items += time/macTime;
        if(items>=k) return true;
    }
    return false;
}

void f(long long n, vector<long long> v, long long k) {
    long long res;
    long long i=1;
    long long j=*max_element(v.begin(), v.end())*1LL*k;

    while(i<=j) {
        long long mid = i+(j-i)/2;

        if(check(v, mid, k)) {
            res = mid;
            j = mid-1;
        }
        else {
            i = mid+1;
        }
    }
    cout<<res<<"\n";
}

int main() {
    long long n, k;
    cin>>n>>k;

    vector<long long> v(n);
    for(long long i=0; i<n; i++) {
        cin>>v[i];
    }

    f(n, v, k);

    return 0;
}