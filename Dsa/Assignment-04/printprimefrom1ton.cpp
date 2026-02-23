#include<bits/stdc++.h>
using namespace std;

int printPrime1toN(int n) {
    if(n==2) {
        return 1;
    }
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;

    for(int i=2; i<=n; i++) {
        if(printPrime1toN(i)==1) {
            cout<<i<<" ";
        }
    }

    return 0;
}