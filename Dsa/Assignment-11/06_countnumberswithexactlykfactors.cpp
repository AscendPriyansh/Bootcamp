#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n >> q >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int size = n;
    vector<long long> copy = v;
    vector<long long> prefixDigitSum;
    long long times = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j * j <= copy[i]; j++)
        {
            if (copy[i] % j == 0)
            {
                if (j * j == copy[i])
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
        }

        if (count == k)
        {
            times++;
            prefixDigitSum.push_back(times);
        }
        else
        {
            prefixDigitSum.push_back(times);
        }
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