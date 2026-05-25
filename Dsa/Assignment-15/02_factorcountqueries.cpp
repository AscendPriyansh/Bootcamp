#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    vector<int> inp(q);
    int mx = 0;

    for (int i = 0; i < q; i++)
    {
        cin >> inp[i];
        mx = max(mx, inp[i]);
    }

    vector<int> v(mx + 1, 0);

    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
        {
            v[j]++;
        }
    }

    for (int i = 0; i < q; i++)
    {
        cout << v[inp[i]] << "\n";
    }

    return 0;
}