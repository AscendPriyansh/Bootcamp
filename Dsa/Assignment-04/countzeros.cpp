#include<bits/stdc++.h>
using namespace std;

void countZeros(long long n) {
    long long count=0;
    string str = to_string(n);
    for(int i=0; i<str.size(); i++) {
        if(str[i]=='0') {
            count++;
        }
    }
    cout<<count;
}

int main() {
    long long n;
    cin>>n;

    countZeros(n);

    return 0;
}