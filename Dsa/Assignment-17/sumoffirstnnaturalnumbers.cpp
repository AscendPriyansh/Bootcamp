#include<bits/stdc++.h>
using namespace std;

long long f(int n, long long sum) {
    if(n==0) {
        return sum;
    }
    sum+=n;
    f(n-1, sum);
}

int main() {
    int n;
    cin>>n;

    cout<<f(n, 0);

    return 0;
}