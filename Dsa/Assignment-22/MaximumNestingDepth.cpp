#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<int> v;

    int store = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int size = v.size();
        store = max(store, size);
        if(s[i]=='(') {
            v.push(s[i]);
        }
        else if(s[i]==')') {
            v.pop();
        }
    }

    cout<<store<<"\n";

    return 0;
}