#include<bits/stdc++.h>
using namespace std;

void primeFactor1(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            cout<<i<<" ";
        }
    }
}

int main() {
    int n;
    cin>>n;

    primeFactor1(n);

    return 0;
}