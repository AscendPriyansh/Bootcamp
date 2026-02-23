#include<bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin>>x;

    if(x>='A' && x<='Z') {
        char store = x+32;
        cout<<store;
    }
    else {
        cout<<x;
    }


    return 0;
}