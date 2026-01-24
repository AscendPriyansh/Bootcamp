#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;

	if(b%a==0) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }

    return 0;
}