#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0; i<n; i++) {
	    cin>>v[i];
	}
	
    map<long long, long long> mpp;
	for(long long i=0; i<n; i++) {
	    mpp[v[i]]++;
	}
	
    for(long long i=0; i<n; i++) {
        if(mpp[v[i]]==1) {
            cout<<v[i]<<" ";
        }
    }

    return 0;
}
