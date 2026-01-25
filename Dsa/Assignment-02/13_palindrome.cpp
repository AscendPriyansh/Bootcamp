#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long store=n;
    long long rev=0;
    while(n>0) {
        long long lastdigit = n%10;
        n = n/10;
        rev = rev*10+lastdigit;
    }

    if(store==rev) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    

    return 0;
}