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

    for(int i=0; i<m; i++) {
        if(i%2==0) {
            for(int j=0; j<n; j++) {
                cout<<v[j][i]<<" ";
            }
        }
        else {
            for(int j=0; j<n; j++) {
                cout<<v[n-j-1][i]<<" ";
            }
        }
    }


    return 0;
}