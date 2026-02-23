#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while(test--) {
        int n, m;
        cin>>n;
        vector<int> arr1(n);
        for(int i=0; i<n; i++) {
            cin>>arr1[i];
        }

        cin>>m;
        vector<int> arr2(m);
        for(int i=0; i<m; i++) {
            cin>>arr2[i];
        }

        set<int> res;

        for(int i=0; i<n; i++) {
            res.insert(arr1[i]);
        }
        for(int i=0; i<m; i++) {
            res.insert(arr2[i]);
        }

        for(auto x : res) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}