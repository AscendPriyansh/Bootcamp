#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long curr=1;
    while(curr<=n) {
        curr*=2;
    }
    curr/=2;
    cout<<curr<<" ";

    long long sum = curr;
    while(curr>1) {
        sum += (curr/=2);
        if(sum<=n) {
            cout<<curr<<" ";
        }
        else {
            sum-=curr;
        }
    }

    return 0;
}