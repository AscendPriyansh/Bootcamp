#include<bits/stdc++.h>
using namespace std;

void f(int n, int m, vector<vector<int>>& v, int left, int right, vector<char>& path) {
    if(left==(n-1) && right==(m-1)) {
        for(int i=0; i<path.size(); i++) {
            cout<<path[i];
        }
        cout<<"\n";
        return;
    }
    if(left>=n || right>=m) {
        return;
    }

    path.push_back('R');
    if(right+1<m && v[left][right+1]!=1) f(n, m, v, left, right+1, path);
    path.pop_back();

    path.push_back('D');
    if(left+1<n && v[left+1][right]!=1) f(n, m, v, left+1, right, path);
    path.pop_back();


}

int main() {
    int x, y;
    cin>>x>>y;

    vector<vector<int>> v(x, vector<int>(y));
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            cin>>v[i][j];
        }
    }

    vector<char> path;
    f(x, y, v, 0, 0, path);

    return 0;
}