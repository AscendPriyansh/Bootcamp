#include<bits/stdc++.h>
using namespace std;

string binarySearch(vector<long long> v, int n, long long x) {
    int i=0;
    int j=n-1;

    while(i<=j) {
        int mid = (i+j)/2;
        if(v[mid]==x) {
            return "YES";
        }
        else if(v[mid]>x) {
            j=mid-1;
        }
        else {
            i=mid+1;
        }
    }
    return "NO";
}

int main() {
    int n;
    long long x;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cin>>x;

    string store = binarySearch(v, n, x);
    cout<<store;


    return 0;
}