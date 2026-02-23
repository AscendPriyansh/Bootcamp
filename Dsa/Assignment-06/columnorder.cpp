#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<v[j][i]<<" ";
        }
    }


    return 0;
}