#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long mini = LLONG_MAX;
    long long index = -1;
    for(long long i=0; i<n; i++) {
        if(arr[i]<mini) {
            mini = arr[i];
            index = i;
        }
    }

    cout<<mini<<" "<<index+1;

    return 0;
}