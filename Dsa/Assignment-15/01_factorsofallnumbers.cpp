#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v[n+1];

    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            v[j].push_back(i);
        }
    }

    for(int i=1; i<=n; i++) {
        for(auto it: v[i]) {
            cout<<it<<" ";
        }
        cout<<"\n";
    }

    return 0;
}