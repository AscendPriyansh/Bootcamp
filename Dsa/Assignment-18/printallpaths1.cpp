#include<bits/stdc++.h>
using namespace std;

void f(int n, int m, vector<char>& v, int left, int right) {
    if(left==(n-1) && right==(m-1)) {
        for(int i=0; i<v.size(); i++) {
            cout<<v[i];
        }
        cout<<"\n";
        return;
    }
    if(left>n || right>m) {
        return;
    }
    v.push_back('D');
    f(n, m , v, left+1, right);
    v.pop_back();

    v.push_back('R');
    f(n, m , v, left, right+1);
    v.pop_back();
}

int main() {
    int n, m;
    cin>>n>>m;

    vector<char> path;
    f(n, m, path, 0, 0);

    return 0;
}