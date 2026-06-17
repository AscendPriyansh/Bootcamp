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

    while (k--)
    {
        long long q;
        cin >> q;

        int i = 0;
        int j = v.size() - 1;
        long long store=v.size()+1;

        while (i <= j)
        {
            int mid = i + (j - i) / 2;

            if (v[mid] >= q)
            {
                store = mid+1;
                j = mid-1;
            }
            else
            {
                i = mid + 1;
            }
        }

        cout<<store<<"\n";
    }

    return 0;
}