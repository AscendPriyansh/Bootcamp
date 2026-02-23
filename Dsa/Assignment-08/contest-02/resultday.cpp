#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int x;
    cin>>x;

    int pass=0;
    int fail=0;

    for(int i=0; i<n; i++) {
        if(v[i]>=x) {
            pass++;
        }
        else {
            fail++;
        }
    }

    cout<<"Pass: "<<pass<<endl;
    cout<<"Fail: "<<fail;

    return 0;
}