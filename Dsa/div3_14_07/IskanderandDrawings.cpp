#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count=0;
        int maxi=0;

        for(int i=0; i<n; i++) {
            if(s[i]=='#') {
                count++;
            }
            else {
                maxi = max(maxi, count);
                count=0;
            }
        }
        maxi = max(maxi, count);
        
        cout<<(maxi+1)/2<<"\n";
    }


    return 0;
}