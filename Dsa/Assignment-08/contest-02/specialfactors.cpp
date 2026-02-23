#include<bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin>>n;

    bool check=false;
    for(int i=2; i<=n; i++) {
        int lastDigit = i%10;
        if(lastDigit==2 || lastDigit==7) {
            if(n%i==0) {
                check=true;
                cout<<i<<" ";
            }
        }
    }   

    if(check==false) {
        cout<<-1;
    }

    return 0;
}