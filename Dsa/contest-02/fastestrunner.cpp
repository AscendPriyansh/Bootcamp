#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int maxi = INT_MAX;
    int id=-1;
    for(int i=0; i<n; i++) {
        if(maxi>=v[i]) {
            maxi=v[i];
            id = i;
        }
    }

    cout<<id+1;

    return 0;
}