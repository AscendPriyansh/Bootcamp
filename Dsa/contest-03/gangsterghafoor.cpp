#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
        }
    }

    while(true) {
        for(int i=n-1; i>=0; i--) {
            if(v[i][0]==-1) {
                return 0;
            }
            else {
                cout<<v[i][0]<<" ";
            }
        }
        for(int i=1; i<m; i++) {
            if(v[0][i]==-1) {
                return 0;
            }
            else {
                cout<<v[0][i]<<" ";
            }
        }
        for(int i=1; i<n-1; i++) {
            if(v[i][m-1]==-1) {
                return 0;
            }
            else {
                cout<<v[i][m-1]<<" ";
            }
        }
        for(int i=m-1; i>=0; i--) {
            if(v[n-1][i]==-1) {
                return 0;
            }
            else {
                cout<<v[n-1][i]<<" ";
            }
        }
    }


    return 0;
}