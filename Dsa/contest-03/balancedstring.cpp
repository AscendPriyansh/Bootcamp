#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;

    int a=0, b=0;
    for(int i=0; i<n.size(); i++) {
        if(n[i]=='a') {
            a++;
        }
        else {
            b++;
        }
    }

    if(a==b) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }


    return 0;
}