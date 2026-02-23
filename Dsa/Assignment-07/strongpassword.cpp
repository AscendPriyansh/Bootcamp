#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    bool lowerChar=false;
    bool upperChar=false;
    bool digitChar=false;
    bool specialChar=false;
    bool allCheck=false;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>=65 && s[i]<=90) {
            lowerChar=true;
        }
        else if(s[i]>=97 && s[i]<=122) {
            upperChar=true;
        }
        else if(s[i]>=48 && s[i]<=57) {
            digitChar=true;
        }
        else {
            specialChar=true;
        }
    }

    if(lowerChar && upperChar && digitChar && specialChar) {
        allCheck=true;
    }
    if(s.size()==10 && allCheck) {
        cout<<"Strong";
    }
    else {
        cout<<"Weak";
    }

    return 0;
}