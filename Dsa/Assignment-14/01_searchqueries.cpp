#include <bits/stdc++.h>
using namespace std;

long long BinarySearch(vector<long long>& v, long long x)
{
    int n = v.size();
    long long low = 0;
    long long high = n - 1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (v[mid] == x)
        {
            return mid+1;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        long long x;
        cin >> x;

        long long result = BinarySearch(v, x);
        cout<<result<<"\n";
    }

    return 0;
}