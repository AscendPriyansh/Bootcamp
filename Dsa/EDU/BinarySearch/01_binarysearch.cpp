#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<long long> v, int q)
{
}

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
        bool flag=false;

        while (i <= j)
        {
            int mid = i + (j - i) / 2;

            if (v[mid] == q)
            {
                cout << "YES" << "\n";
                flag=true;
                break;
            }
            else if (v[mid] > q)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }

        if(flag==false) cout << "NO" << "\n";
    }

    return 0;
}