#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans(n, 0);
    stack<int> s;

    for(int i=0; i<n; i++) {
        while(s.empty() && s.top()<v[i]) {
            int store = s.size()-s.top();
            ans[i]=
        }
        s.push(i);
    }

    return 0;
}