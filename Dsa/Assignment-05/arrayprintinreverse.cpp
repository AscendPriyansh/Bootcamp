#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int i=0, j=n-1;
    while(i<j) {
        int store = arr[i];
        arr[i]=arr[j];
        arr[j]=store;
        i++;
        j--;
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}