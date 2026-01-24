#include<iostream>
using namespace std;

int main() {
	int x, y;
    cin>>x>>y;

    if(x==0 && y==0) {
        cout<<"Origin"<<endl;
    }
    else if(x!=0 && y==0) {
        cout<<"X axis"<<endl;
    }
    else if(x==0 && y!=0) {
        cout<<"Y axis"<<endl;
    }
    else if(x>0 && y>0) {
        cout<<"1st Quadrant"<<endl;
    }
    else if(x<0 && y>0) {
        cout<<"2nd Quadrant"<<endl;
    }
    else if(x<0 && y<0) {
        cout<<"3rd Quadrant"<<endl;
    }
    else {
        cout<<"4th Quadrant"<<endl;
    }

    return 0;
}