#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int store = v[i][0];
        for (int j = 0; j < m; j++)
        {
            if (store > v[i][j])
            {
                store = v[i][j];
            }
        }
        cout << store << " ";
    }

    return 0;
}