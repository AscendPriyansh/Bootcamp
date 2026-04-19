#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    set<long long> s;
    for(int i=0; i<n; i++) {
        int x;
        long long y;
        cin>>x;
        if(x!=3) {
            cin>>y;
        }

        if(x==1) {
            s.insert(y);
        }
        else if(x==2) {
            s.erase(y);
        }
        else if(x==3) {
            cout<<s.size()<<endl;   
        }
        else {
            bool flag=false;
            if(s.find(y)!=s.end()) {
                flag=true;
            }
            if(flag==false) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}