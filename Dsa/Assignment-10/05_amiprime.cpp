#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool flag = false;
    if (n % 2 != 0)
    {
        cout << "YES";
    }
    else
    {
        vector<int> v = {2, 3, 5, 7, 9, 11, 13};
        for (long long i = 0; i < v.size(); i++)
        {
            if (n % v[i] == 0)
            {
                flag = true;
                cout << "NO";
                break;
            }
        }

        if (flag == false)
        {
            cout << "YES";
        }
    }

    return 0;
}