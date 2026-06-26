#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++) {
	    cin>>v[i];
	}
	
	int low=0;
	int mid=0;
	int high=n-1;
	
	while(mid<=high) {
	    if(v[mid]==0) {
	        swap(v[mid], v[high]);
	        high--;
	    }
	    else if(v[mid]==2) {
	        swap(v[mid], v[low]);
	        mid++;
	        low++;
	    }
	    else {
	        mid++;
	    }
	}
	
	
	for(int i=0; i<n; i++) {
	    cout<<v[i]<<" ";
	}
	

    return 0;
}
