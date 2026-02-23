#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string res;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!=' ') {
            res.push_back(s[i]);
        }
    }

    cout<<res;


    return 0;
}