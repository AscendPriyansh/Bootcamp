#include<bits/stdc++.h>
using namespace std;

long long f(long long n, long long sum) {
    if(n==0) {
        return;
    }
    sum+=(n%10);
    f(n/=10, sum);
}

int main() {
    long long n;
    cin>>n;

    cout<<f(n, 0);

    return 0;
}