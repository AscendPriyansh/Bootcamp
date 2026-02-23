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
        int sum=0;
        for(int j=0; j<n; j++) {
            sum+=v[j][i];
        }
        cout<<sum<<" ";
    }


    return 0;
}