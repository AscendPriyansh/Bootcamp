#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long x;
        cin>>x;

        long long sum=0;
        while(x) {
            long long lastDigit = x%10;
            sum+=lastDigit;
            x/=10;
        }

        if(sum==7) {
            cout<<"Thala for a reason"<<endl;
        }
        else {
            cout<<"Blocked for no reason"<<endl;
        }
        sum=0;
    }

    return 0;
}