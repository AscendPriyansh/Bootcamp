#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;

    long long decimal = 0;
    for(long long i=0; i<n.size(); i++) {
        decimal <<=1;

        if(n[i]=='1') {
            decimal = decimal | 1;
        }
    }

    cout<<decimal;

    return 0;
}