#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char a;
    cin>>s>>a;

    string res;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!=a) {
            res.push_back(s[i]);
        }
    }
    cout<<res;

    return 0;
}