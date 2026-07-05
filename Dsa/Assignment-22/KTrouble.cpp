#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    stack<pair<char, int>> v;

    for (int i = 0; i < s.size(); i++)
    {
        if(v.empty() || v.top().first!=s[i]) {
            v.push({s[i], 1});
        }
        else {
            v.top().second++;
        }

        if(v.top().second==k) {
            v.pop();
        }
    }

    string ans;
    while (!v.empty())
    {
        int store = v.top().second;
        while(store--) ans += v.top().first;
        v.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}