#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin>>k;

    sort(v.begin(), v.end());

    while (k--)
    {
        long long l,r;
        cin>>l>>r;

        long long lb = lower_bound(v.begin(), v.end(), l) - v.begin();
        long long ub = upper_bound(v.begin(), v.end(), r) - v.begin();

        cout<<ub-lb<<" ";
    }

    return 0;
}