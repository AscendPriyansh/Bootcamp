#include<bits/stdc++.h>
using namespace std;

void f(int n, vector<long long>& v, long long x, bool flag) {
    if(n==v.size()) {
        if (flag==false) cout<<-1;
        return;
    }
    
    if(v[n]==x) {
        flag=true;
        cout<<n+1<<" ";
    }
    f(n+1, v, x, flag);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    long long x;
    cin>>x;
    
    f(0, v, x, false);

    return 0;
}