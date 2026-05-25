#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<long long>& v, long long x, int count, bool flag) {
    if(count==n) {
        return count;
    }
    if(v[count]==x) {
        cout<<count+1<<" ";
        flag=true;
    }
    return f(n, v, x, count+1, flag);
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

    bool flag=false;
    f(n, v, x, -1, flag);
    if(flag) {
        cout<<-1;
    }
    

    return 0;
}