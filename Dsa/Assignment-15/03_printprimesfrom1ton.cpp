#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> check(n + 1, true);
    check[0] = check[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (check[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }

    int count = 0;
    bool first = true;
    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            if (!first)
                cout << " ";
            cout << i;
            first = false;
            count++;
        }
    }
    cout << "\n"
         << count;
    return 0;
}