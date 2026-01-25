#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int flag = 0;
    for(int i=0; i<n; i++) {
        if(i%2==0 || i==0) {
            flag=0;
        }
        else {
            flag=1;
        }
        for(int j=0; j<=i; j++) {
            if(flag==0) {
                cout<<0;
                flag=1;
            }
            else {
                cout<<1;
                flag=0;
            }
            
        }
        cout<<endl;
    }

    return 0;
}