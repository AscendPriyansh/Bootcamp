#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    stack<char> v;
    v.push(s[0]);

    for(int i=1; i<s.size(); i++) {
        int store=-1;
        if(!v.empty()) store = v.top();
        if(!v.empty() && store==s[i]) {
            v.pop();
        }
        else {
            v.push(s[i]);
        }
    }

    string ans;
    while(!v.empty()) {
        ans+=v.top();
        v.pop();
    }

    reverse(ans.begin(), ans.end());
    cout<<ans;

    return 0;
}