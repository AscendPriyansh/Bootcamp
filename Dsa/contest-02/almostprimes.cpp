#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    if(n<=1) {
        return true;
    }
    
    int count=0;
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            count++;
        }
    }
    
    if(count<=2) {
        return true;
    }
    
    return false;
}

int main() {
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++) {
	    if(check(i)) {
	        cout<<i<<" ";
	    }
	}

    return 0;
}
