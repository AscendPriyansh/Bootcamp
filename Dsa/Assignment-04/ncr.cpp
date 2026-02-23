#include<bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for(long long i=2; i<=n; i++) {
        fact*=i;
    } 
    return fact;
}

void nCr(int n, int r) {
    if(r>n) {
        cout<<0;
        return;
    }
    long long ncr;
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ncr;
}

int main() {
    int n, r;
    cin>>n>>r;

    nCr(n, r);

    return 0;
}