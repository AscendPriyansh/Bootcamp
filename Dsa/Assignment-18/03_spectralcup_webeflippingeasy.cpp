#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        
        bool flip = false;
        vector<long long> seq;
        for(int i=n-1; i>=0; i--) {
            long long val = a[i];

            if(flip)
                val *= -1;
            
            if(val>0) {
                seq.push_back(i+1);
                flip = !flip;
            }
        }

        cout<<seq.size()<<"\n";
        for(int i=0; i<seq.size(); i++) {
            cout<<seq[i]<<" ";
        }
        
        cout<<"\n";
    }

    return 0;
}