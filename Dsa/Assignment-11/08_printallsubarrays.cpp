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

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout<<v[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}