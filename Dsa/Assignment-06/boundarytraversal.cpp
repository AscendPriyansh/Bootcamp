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

if(n>1 && m>1) {
    for (int j = 0; j < m; j++)
    {
        cout << v[0][j] << " ";
    }
    for (int j = 1; j < n; j++)
    {
        cout << v[j][m-1] << " ";
    }
    for (int j = 1; j < m; j++)
    {
        cout << v[n-1][m - j - 1] << " ";
    }
    for (int j = 1; j < n-1; j++)
    {
        cout << v[n - j - 1][0] << " ";
    }
}
else {
    if(n==1) {
        for(int i=0; i<m; i++) {
            cout<<v[0][i]<<" ";
        }
    }
    else {
        for(int i=0; i<n; i++) {
            cout<<v[i][0]<<" ";
        }
    }
}
    return 0;
}