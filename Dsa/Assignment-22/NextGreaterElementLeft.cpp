#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    stack<int> s;
    vector<string> ans(n, "X");
    for (int i = n-1; i >= 0; i--)
    {
        while (s.size() > 0 && v[i] > v[s.top()])
        {
            ans[s.top()] = to_string(v[i]);
            s.pop();
        }
        s.push(i);
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}