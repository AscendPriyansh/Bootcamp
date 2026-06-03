#include<bits/stdc++.h>
using namespace std;

void f(vector<long long>& v, int l, int r) {
    if(l==r) {
        return;
    }

    int mid = (l + r)/2;

    
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    f(v, 0, n-1);

    return 0;
}