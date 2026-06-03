#include<bits/stdc++.h>
using namespace std;

long long f(int n, vector<long long>& v, long long sum) {
    if(n==0) {
        return sum;
    }
    sum+=v[n-1];
    f(n-1, v, sum);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    cout<<f(n, v, 0);

    return 0;
}