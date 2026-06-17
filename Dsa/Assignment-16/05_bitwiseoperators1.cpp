#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin>>a>>b;

    long long and1 = a&b;
    long long or1 = a|b;
    long long xor1 = a^b;

    cout<<and1<<" "<<or1<<" "<<xor1;

    return 0;
}