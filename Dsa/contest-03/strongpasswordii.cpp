#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int count=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>=97 && s[i]<=122) {
            count++;
            break;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i]>=65 && s[i]<=90) {
            count++;
            break;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(s[i]>=48 && s[i]<=57) {
            count++;
            break;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if(!(s[i]>=48 && s[i]<=57) && !(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122)) {
            count++;
            break;
        }
    }

    if(count==4) {
        cout<<"Strong";
    }
    else if(count==3) {
        cout<<"Moderate";
    }
    else {
        cout<<"Weak";
    }

    return 0;
}