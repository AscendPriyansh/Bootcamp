#include<bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin>>x;

    int store = (int)x;

    if(store>=65 && store<=90) {
        cout<<"Uppercase";
    }
    else if(store>=97 && store<=122) {
        cout<<"Lowercase";
    }
    else if(store>=48 && store<=57) {
        cout<<"Digit";
    }
    else {
        cout<<"Special";
    }

    return 0;
}