#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long n, m, r, c;
        cin>>n>>m>>r>>c;

        n%=998244353;
        m%=998244353;
        r%=998244353;
        c%=998244353;

        long long calc = ((n*m)-((n-r+1)*(m-c+1)));
        long long store = pow(2, calc);
        cout<<store<<"\n";
    }


    return 0;
}