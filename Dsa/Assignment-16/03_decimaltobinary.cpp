#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    string s;

    // while(n>0) {
    //     long long bit = (n&1);
    //     s+=(bit+'0');
    //     n>>=1;
    // }

    // reverse(s.begin(), s.end());

    // cout<<s;

    // METHOD - 2

    // edge case for n = 0;

    if(n==0) {
        cout<<0;
        return 0;
    }

    bool check = false;
    for(long long i=62; i>=0; i--) {
        if((n>>i)&1) {
            check=true;
            cout<<1;
        }
        else if(check) {
            cout<<0;
        }
    }

    return 0;
}