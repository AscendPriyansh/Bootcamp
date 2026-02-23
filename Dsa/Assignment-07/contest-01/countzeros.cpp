#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long count=0;
    string store = to_string(n);
    for(long long i=0; i<store.size(); i++) {
        if(store[i]=='0') {
            count++;
        }
    }

    cout<<count;

    return 0;
}