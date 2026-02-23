#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n%100==0) {
        if(n%400==0) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    }
    else {
        if(n%4==0) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }  
    }
    

    return 0;
}