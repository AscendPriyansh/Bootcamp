#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    for(int i=62; i>=0; i--) {
        if ((n >> i) & 1) {
            long long power_of_two = 1LL << i;
            cout << power_of_two << " ";
        }
    }

    return 0;
}

