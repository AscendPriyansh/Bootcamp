#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long sum=0;

    while(n>0) {
        long long lastDigit = n%10;
        n = n/10;

        sum+=lastDigit;
    }
    
    cout<<sum;

    return 0;
}