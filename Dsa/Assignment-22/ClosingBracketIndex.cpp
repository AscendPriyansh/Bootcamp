#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int n;
    cin >> n;

    stack<int> v;

    int store = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='(') {
            v.push(i);
        } else if(s[i]==')') {
            if(n==v.top()) {
                store=i;
                break;
            }
            v.pop();
        }
    }

    cout<<store<<"\n";

    return 0;
}