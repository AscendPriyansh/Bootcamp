#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    for(long long i=2; i*i<=n; i++) {
        long long count=0;
        if(n%i==0) {
            while(n%i==0) {
                count++;
                n/=i;
            }
        }
        if(count!=0) cout<<i<<"^"<<count<<" ";
    }

    if(n > 1) {
        cout << n << "^1";
    }


    return 0;
}