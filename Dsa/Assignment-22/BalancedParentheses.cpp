#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        stack<char> v;

        bool flag=false;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(') {
                v.push(s[i]);
            }
            else {
                if(v.empty()) {
                    flag=true;
                    break;
                }

                int store = v.top();
                v.pop();
                if((store=='(' && s[i]!=')') || (store=='[' && s[i]!=']') || (store=='{' && s[i]!='}')) {
                    flag=true;
                    break;
                }
            }
        }

        if(!v.empty()) {
            flag=true;
        }

        if(flag==true) cout<<"No"<<"\n";
        else cout<<"Yes"<<"\n";
    }


    return 0;
}