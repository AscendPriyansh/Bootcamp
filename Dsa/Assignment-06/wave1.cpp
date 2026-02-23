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

    for(int i=0; i<n; i++) {
        if(i%2==0) {
            for(int j=0; j<m; j++) {
                cout<<v[i][j]<<" ";
            }
        }
        else {
            for(int j=0; j<m; j++) {
                cout<<v[i][m-j-1]<<" ";
            }
        }
        
    }


    return 0;
}