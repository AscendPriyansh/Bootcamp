#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;

    int i=0, j=0;
    string res;

    while(i!=a.size() && j!=b.size()) {
        res.push_back(a[i]);
        res.push_back('-');
        res.push_back(b[j]);
        i++;
        j++;
        if(i!=a.size() && j!=b.size()) {
            res.push_back('-');
        }
    }

    if(i!=a.size()) {
        res.push_back('-');
        for(int j=i; j<a.size(); j++) {
            res.push_back(a[j]);
            if(j+1!=a.size()) 
                res.push_back('-');
        }
    }
    if(j!=b.size()) {
        res.push_back('-');
        for(int i=j; i<b.size(); i++) {
            res.push_back(b[i]);
            if(i+1!=b.size()) 
                res.push_back('-');
        }
    }

    cout<<res;



    return 0;
}