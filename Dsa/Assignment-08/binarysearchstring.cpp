#include<bits/stdc++.h>
using namespace std;

string binarySearchString(vector<string> v, int n, string x) {
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
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    string x;
    cin>>x;

    string store = binarySearchString(v, n, x);
    cout<<store;

    return 0;
}