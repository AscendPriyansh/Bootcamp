#include<bits/stdc++.h>
using namespace std;

void f(int n, vector<int>& v, vector<int>& subseq, int idx) {
    if(idx==v.size()) {
        if(subseq.size()==0) {
            return;
        }
        for(int i=0; i<subseq.size(); i++) {
            cout<<subseq[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    subseq.push_back(v[idx]);
    f(n, v, subseq, idx+1);
    subseq.pop_back();

    f(n, v, subseq, idx+1);
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<int> subseq;
    f(n, v, subseq, 0);

    return 0;
}