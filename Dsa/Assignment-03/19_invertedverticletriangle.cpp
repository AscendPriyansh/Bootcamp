#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=2*i; j++) {
            if(j==0) {
                cout<<"*";
            }
            else if(j==2*i) {
                cout<<"* ";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    for(int i=n-2; i>=0; i--) {
        for(int j=0; j<=2*i; j++) {
            if(j==0 || j==2*i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}