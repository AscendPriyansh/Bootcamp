#include<bits/stdc++.h>
using namespace std;

void factorial(int n) {
    long long fact = 1;
    for(long long i=2; i<=n; i++) {
        fact*=i;
    } 
    cout<<fact;
}

int main() {
    int n;
    cin>>n;

    factorial(n);

    return 0;
}