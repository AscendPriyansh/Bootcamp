#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while(test--) {
        long long a, b;
        cin>>a>>b;

        long long sum = ((a+b)*(b-a+1))/2;

        cout<<sum<<endl;
    }


    return 0;
}