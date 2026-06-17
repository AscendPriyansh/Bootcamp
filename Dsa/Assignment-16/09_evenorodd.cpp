#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    if((n&(1<<0))==0) {
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }

    return 0;
}