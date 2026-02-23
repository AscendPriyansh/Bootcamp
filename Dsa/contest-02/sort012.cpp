#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    
    bool swapped;
    for(int i=0; i<n-1; i++) {
        swapped=false;
        for(int j=0; j<n-i-1; j++) {
            if(v[j]<v[j+1]) {
                int store = v[j];
                v[j] = v[j+1];
                v[j+1]=store;
                swapped=true;
            }
        }

        if (!swapped)
        break;
    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}