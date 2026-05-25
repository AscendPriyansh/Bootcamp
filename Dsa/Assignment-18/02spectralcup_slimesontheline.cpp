#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int count=0;
        int first = a[0];
        int last = a[n-1];
        while(true) {
            if((first+1)==last) {
                cout<<count+1<<"\n";
                break;
            }
            if(first==last) {
                cout<<count<<"\n";
                break;
            }
            count++;
            first++;
            last--;
        }
    }

    return 0;
}