#include<bits/stdc++.h>
using namespace std;

void f(int n, char from, char to, char need) {
    if(n==1) {
        cout<<"Move "<<from<<" to "<<to<<"\n";
        return;
    }

    f(n-1, from, need, to);
    cout<<"Move "<<from<<" to "<<to<<"\n";
    f(n-1, need, to, from);
}

int main() {
    int n;
    cin>>n;
    
    f(n, 'A', 'C', 'B');

    return 0;
}