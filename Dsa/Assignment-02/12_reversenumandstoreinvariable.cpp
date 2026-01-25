#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long rev=0;
    while(n>0) {
        long long lastdigit = n%10;
        n = n/10;
        rev = rev*10+lastdigit;
    }

    cout<<rev;
    

    return 0;
}