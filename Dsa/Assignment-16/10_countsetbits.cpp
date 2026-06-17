#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long count=0;

    for(int i=0; i<=62; i++) {
        if((n&(1LL<<i))!=0) {
            count++;
        }
    }

    cout<<count;

    return 0;
}


