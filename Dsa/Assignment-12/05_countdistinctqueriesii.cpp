#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<long long, int> s;
    for(int i=0; i<n; i++) {
        int x;
        long long y;
        cin>>x;
        if(x!=3) {
            cin>>y;
        }

        if(x==1) {
            s[y]++;
        }
        else if(x==2) {
            if(s.find(y)!=s.end()) {
                s[y]--;
                if(s[y]==0) {
                    s.erase(y);
                }
            }
        }
        else if(x==3) {
            cout<<s.size()<<endl;   
        }
        else {
            if(s.find(y)!=s.end()) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}