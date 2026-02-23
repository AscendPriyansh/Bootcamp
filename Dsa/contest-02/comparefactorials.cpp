#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin>>a>>b;

    if((a==b) || ((a==0 && b==1) || (a==1 && b==0))) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    return 0;
}