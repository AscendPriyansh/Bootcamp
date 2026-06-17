#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    for(long long i=1; i<=x; i++) {
        if((i & (i-1))==0) {
            cout<<i<<" ";
        }
    }

    return 0;
}