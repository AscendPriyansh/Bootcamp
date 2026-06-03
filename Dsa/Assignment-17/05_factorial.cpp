#include<bits/stdc++.h>
using namespace std;

long long f(int n, long long fact) {
    if(n==0) {
        return fact;
    }
    fact*=n;
    f(n-1, fact);
}

int main() {
    int n;
    cin>>n;

    cout<<f(n, 1);

    return 0;
}