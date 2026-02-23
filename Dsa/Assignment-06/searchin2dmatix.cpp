#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n, x;
    cin>>n>>m>>x;
    int v[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(x==v[i][j]) {
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";


    return 0;
}