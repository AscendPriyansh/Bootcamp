#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n>>q>>k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int size = n;
    vector<long long> copy = v;
    vector<long long> prefixDigitSum;
    long long count = 0;

    for (int i = 0; i<n; i++)
    {
        int sum = 0;
        while (copy[i]>0)
        {
            int lastDigit = copy[i] % 10;
            sum += lastDigit;
            copy[i] /= 10;
        }

        if(sum==k) {
            count++;
            prefixDigitSum.push_back(count);
        }
        else {
            prefixDigitSum.push_back(count);
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