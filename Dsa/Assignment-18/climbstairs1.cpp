#include<bits/stdc++.h>
using namespace std;

void f(int n, int start, vector<int>& v) {
    if(start==n) {
        for(int i=0; i<v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(start>n) {
        return;
    }

    v.push_back(1);
    f(n, start+1, v);
    v.pop_back();

    v.push_back(2);
    f(n, start+2, v);
    v.pop_back();
}

int main() {
    int n;
    cin>>n;

    vector<int> v;
    f(n, 0, v);

    return 0;
}