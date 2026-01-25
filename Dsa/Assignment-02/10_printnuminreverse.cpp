#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    if(n==0) {
        cout<<0;
        return 0;
    }

    while(n>0) {
        long long lastdigit = n%10;
        cout<<lastdigit;
        n = n/10;
    }
    

    return 0;
}