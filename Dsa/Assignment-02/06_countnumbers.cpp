#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int pos=0;
    int neg=0;
    int even=0;
    int odd=0;

    for(int i=0; i<n; i++) {
        if(v[i]>0) {
            if(v[i]%2==0) {
                pos++;
                even++;
            }
            else {
                pos++;
                odd++;
            }
        }
        else if(v[i]==0) {
            even++;
        }
        else {
            if(v[i]%2==0) {
                neg++;
                even++;
            }
            else {
                neg++;
                odd++;
            }
        }
    }

    cout<<pos<<endl<<neg<<endl<<even<<endl<<odd;
    

    return 0;
}