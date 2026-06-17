#include<bits/stdc++.h>
using namespace std;

long long merge(vector<long long>& v, int l, int r) {
    vector<long long> temp;
    int mid = (l+r)/2;

    int i = l;
    int j = mid+1;

    long long ans3=0;

    while(i<=mid && j<=r) {
        if(v[i]<=v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            j++;
            ans3+=(mid-i+1);
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

    return ans3;
}

long long f(vector<long long>& v, int l, int r) {
    if(l==r) return 0;

    int mid = (l+r)/2;

    long long ans1 = f(v, l, mid);
    long long ans2 = f(v, mid+1, r);

    long long ans3 = merge(v, l, r);

    return ans1+ans2+ans3;
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    cout<<f(v, 0, n-1);

    return 0;
}