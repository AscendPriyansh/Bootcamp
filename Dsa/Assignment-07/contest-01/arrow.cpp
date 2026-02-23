#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << ">";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << ">";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}