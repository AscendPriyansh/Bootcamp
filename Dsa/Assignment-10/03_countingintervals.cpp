#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while(test--) {
        int t;
        cin>>t;
        long long l, r;
        cin>>l>>r;

        if(l>r) {
            cout<<0<<endl;
            continue;
        }

        if(t==1) {
            cout<<max(0LL, r-l-1)<<endl;
        }
        else if(t==2) {
            cout<<r-l<<endl;
        }
        else if(t==3) {
            cout<<r-l<<endl;
        }
        else if(t==4) {
            cout<<r-l+1<<endl;
        }
    }

    return 0;
}