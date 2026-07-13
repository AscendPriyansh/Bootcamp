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
        while(!s.empty() && v[s.top()]>v[i]) {
            s.pop();
        }
        if(!s.empty() && v[s.top()]<v[i]) leftSmaller[i]=s.top();
        s.push(i);
    }

    for(int i=0; i<n; i++) {
        cout<<leftSmaller<<" ";
    }


    return 0;
}