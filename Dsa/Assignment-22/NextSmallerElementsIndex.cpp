#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<string> ans(n, "X");
    stack<pair<int, int>> s;
    
    for(int i=0; i<n; i++) {
        while(s.size()>0 && s.top().first>v[i]) {
            ans[s.top().second]=to_string(i);
            s.pop();
        }
        s.push({v[i], i});
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }


    return 0;
}