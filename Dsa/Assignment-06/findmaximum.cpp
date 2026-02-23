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

    int maxi=INT_MIN;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(maxi<v[i][j]) {
                maxi = v[i][j];
            }
        }
    }

    cout<<maxi;


    return 0;
}