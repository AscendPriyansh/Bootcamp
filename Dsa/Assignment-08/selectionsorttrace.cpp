#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<long long> &v, int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        cout<<"Pass "<<i+1<<": ";
        for(int j=i+1; j<n; j++) {
            if(v[minIndex]>v[j]) {
                minIndex=j;
            }
        }
        swap(v[minIndex], v[i]);
        for(int j=0; j<n; j++) {
            cout<<v[j]<<" ";
        }
        cout<<", min_selected = ";
        cout<<v[i]<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    selectionSort(v, n);

    return 0;
}