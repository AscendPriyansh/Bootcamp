#include<bits/stdc++.h>
using namespace std;

int main() {    
    string h;
    cin>>h;

    int i=0, j=3;
    if(h[i]==h[j]) {
        if(h[i+1]==h[j+1]) {
            cout<<"Mogambo is happy";
        }
        else {
            cout<<"Mogambo is sad";
        }
    }
    else {
        cout<<"Mogambo is sad";
    }



    return 0;
}