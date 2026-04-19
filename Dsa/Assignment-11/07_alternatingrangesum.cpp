#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int size = n;
    vector<long long> prefixDigitSum;
    long long sum = 0;

    vector<pair<int, int>> store(q);

    for(int i=0; i<q; i++) {
        cin>>store[i].first>>store[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << prefixDigitSum[r - 1] << endl;
        else
            cout << prefixDigitSum[r - 1] - prefixDigitSum[l - 2] << endl;
    }

    return 0;
}