#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int i=a.size()-1;
    int j=b.size()-1;
    while(a[i]!=' ') {
        if(a[i]!=b[j]) {
            cout<<"NO";
            return 0;
        }
        i--;
        j--;
    }
    cout<<"YES";

    return 0;
}