#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>n>>m;
    int v[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
        }
    }

    int res=0;
    int index=-1;
    for(int i=0; i<n; i++) {
        int store = 0;
        for(int j=0; j<m; j++) {
           if(v[i][j]==1) {
            store++;
           }
        }
        if(store>res) {
            res=store;
            index=i;
        }
    }
    cout<<index;


    return 0;
}