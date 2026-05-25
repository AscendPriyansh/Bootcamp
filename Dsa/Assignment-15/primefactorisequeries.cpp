#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    while(q--) {
        long long x;
        cin>>x;

        long long count=0;
        for(long long i=2; i*i<=x; i++) {
            count=0;
            if(x%i==0) {
                while(x%i==0) {
                    count++;
                    x/=i;
                }
            }
            if(count>0) cout<<i<<"^"<<count<<" ";
        }
        if(x>1) cout<<x<<"^1";
        cout<<"\n";
    }

    return 0;
}