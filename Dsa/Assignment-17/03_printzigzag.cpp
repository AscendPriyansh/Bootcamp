#include<bits/stdc++.h>
using namespace std;

void f(int n) {
    if(n==0) {
        return;
    }

    cout<<n<<"\n";
    f(n-1);
    if(n!=1) cout<<n<<"\n";
}

int main() {    
    int n;
    cin>>n;

    f(n);

    return 0;
}