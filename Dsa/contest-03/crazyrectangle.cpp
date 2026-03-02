#include<bits/stdc++.h>
using namespace std;

int main() {    
    int n, m;
    cin>>n>>m;
    vector<vector<char>> v(n, vector<char> (m));

    int num=49;
    char alpha='a';
    bool flag=true;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(flag) {
                if(num>57) {
                    num=49;
                }
                v[i][j]=num;
                num++;
                flag=false;
            }
            else {
                if(alpha>'z') {
                    alpha='a';
                }
                v[i][j]=alpha;
                alpha+=1;
                flag=true;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<v[i][j];
        }
        cout<<endl;
    }


    return 0;
}