#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        
        int first = (n%2==0) ? (n/2) : (n/2)+1;
        int count=1;
        while(first--) {
            cout<<count<<" ";
            count+=2;
        }
        int second = (n/2);
        count=2*second;
        while(second--) {
            cout<<count<<" ";
            count-=2;
        }
        cout<<endl;
    }

    return 0;
}