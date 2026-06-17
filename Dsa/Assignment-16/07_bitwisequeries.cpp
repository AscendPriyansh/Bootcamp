#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin>>n>>q;

    while(q--) {
        int t, i;
        cin>>t>>i;

        if(t==1) {
            if((n&(1LL<<i))) {
                cout<<"YES"<<"\n";
            }
            else {
                cout<<"NO"<<"\n";
            }
        }
        else if(t==2) {
            n = ((1LL<<i) | n);
            cout<<n<<"\n";
        }
        else if(t==3) {
            n = (~(1LL<<i) & n);
            cout<<n<<"\n";
        }
        else {
            n = (n ^ (1LL<<i));
            cout<<n<<"\n";
        }
    }

    return 0;
}