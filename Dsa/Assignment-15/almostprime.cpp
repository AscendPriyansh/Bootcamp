#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int size = n;
    int ans=0;
    while(size!=0) {
        int count=0;
        int store = size;
        for(int i=2; i<=store; i++) {
            if(store%i==0) {
                while(store%i==0) {
                    store/=i;
                }
                count++;
            }
        }

        if(count==2) {
            ans++;
        }
        size--;
    }
    cout<<ans;

    return 0;
}