#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n) {
    if(n<2) {
        cout<<"Not Prime";
        return;
    }
    if(n==2) {
        cout<<"Prime";
        return;
    }
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            cout<<"Not Prime";
            return;
        }
    }
    cout<<"Prime";
}

int main() {
    int n;
    cin>>n;

    checkPrime(n);

    return 0;
}