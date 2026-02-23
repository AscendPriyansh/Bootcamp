#include<bits/stdc++.h>
using namespace std;

void findHCF(int a, int b) {
    if(a>=b) {
        for(int i=b; i>=1; i--) {
            if(a%i==0 && b%i==0) {
                cout<<i;
                return;
            }
        }
    }
    else {
        for(int i=a; i>=1; i--) {
            if(b%i==0 && a%i==0) {
                cout<<i;
                return;
            }
        }
    }
}

int main() {
    int a, b;
    cin>>a>>b;

    findHCF(a, b);

    return 0;
}