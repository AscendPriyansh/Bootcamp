#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long count=0;
    for(long long i=2; i*i<=n; i++) {
        if(n%i==0) {
            while(n%i==0) {
                n/=i;
            }
            count++;
        }
    }

    if(n>1) count++;
    cout<<count;


    return 0;
}