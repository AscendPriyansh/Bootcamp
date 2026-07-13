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
    int store=0;
    vector<int> ans;
    for(int i=0; i<n; i++) {
        while(!s.empty() && v[s.top()]<=v[i]) {
            s.pop();
        }
        if(s.empty()) {
            ans.push_back(i+1);
        }
        else {
            ans.push_back(i-s.top());
        }
        s.push(i);
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}