#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while(test--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

       unordered_map<int, int> store;

        for(int i=0; i<n; i++) {
            store[arr[i]]++;
        }

        for(auto it : store) {
            if(it.second>1) {
                cout<<it.first<<endl;
                break;
            }
        }
    }


    return 0;
}