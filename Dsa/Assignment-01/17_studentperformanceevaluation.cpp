#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;

    if(n>90 && n<=100) {
        cout<<"Excellent"<<endl;
    }
    else if(n>80 && n<=90) {
        cout<<"Good"<<endl;
    }
    else if(n>70 && n<=80) {
        cout<<"Fair"<<endl;
    }
    else if(n>60 && n<=70) {
        cout<<"Meets Expectations"<<endl;
    }
    else if(n>=0 && n<=60) {
        cout<<"Below Par"<<endl;
    }
    else {
        cout<<"Invalid Marks"<<endl;
    }

    return 0;
}