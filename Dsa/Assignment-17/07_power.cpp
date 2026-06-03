#include<bits/stdc++.h>
using namespace std;

long long f(int x, long long n, long long value) {
    if(n==0) {
        return value;
    }
    value*=x;
    f(x, n-1, value);
}

int main() {
    int x;
    long long n;
    cin>>x>>n;

    cout<<f(x, n, 1);

    return 0;
}