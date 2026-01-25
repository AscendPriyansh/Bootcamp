#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>0; j--) {
            cout<<" ";
        }
        for(int j=0; j<=i; j++) {
            if(j==0) {
                cout<<"*";
            }
            else if(j==i) {
                cout<<" *";
            }
            else if(i==n-1) {
                cout<<" *";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
   

    return 0;
}