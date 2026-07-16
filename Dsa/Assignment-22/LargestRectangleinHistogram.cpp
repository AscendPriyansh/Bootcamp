#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    stack<int> s;
    vector<int> leftSmaller(n, -1);
    for(int i=0; i<n; i++) {
        while(!s.empty() && v[s.top()]>=v[i]) {
            s.pop();
        }
        if(!s.empty()) leftSmaller[i]=s.top();
        s.push(i);
    }

    s = stack<int>();
    vector<int> rightSmaller(n, -1);
    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && v[s.top()]>=v[i]) {
            s.pop();
        }
        if(!s.empty()) rightSmaller[i]=s.top();
        s.push(i);
    }

    int ans=0;
    for(int i=0; i<n; i++) {
        int h=v[i];
        int w=rightSmaller[i]-leftSmaller[i]-1;
        ans=max(ans, h*w);
    }

    cout<<ans;

    return 0;
}