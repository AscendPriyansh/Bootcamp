#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long total = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long prev = 0;
        for (int j = i; j < n; j++)
        {
            prev += v[j];
            if ((j - i + 1) == k)
            {
                total = max(total, prev);
                break;
            }
        }
    }

    cout << total;

    return 0;
}