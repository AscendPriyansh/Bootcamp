#include<bits/stdc++.h>
using namespace std;

void merge(vector<long long>& v, int l, int r) {
    vector<long long> temp;
    int mid = (l+r)/2;

    int i = l;
    int j = mid+1;

    while(i<=mid && j<=r) {
        if(v[i]<=v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            j++;
        }
    }

    while(i<=mid) {
        temp.push_back(v[i]);
        i++;
    }

    while(j<=r) {
        temp.push_back(v[j]);
        j++;
    }

    int ptr=0;
    for(int i=l; i<=r; i++) {
        v[i]=temp[ptr];
        ptr++;
    }
}

void f(vector<long long>& v, int l, int r) {
    if(l==r) return;

    int mid = (l+r)/2;

    f(v, l, mid);
    f(v, mid+1, r);

    merge(v, l, r);
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    f(v, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}