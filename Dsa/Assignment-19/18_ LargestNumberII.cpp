#include <bits/stdc++.h>
using namespace std;

bool compareNumbers(const string &a, const string &b) {
    return a + b > b + a;
}

int main()
{
    int n;
    if (!(cin >> n))
        return 0;

    vector<string> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), compareNumbers);

    if (nums[0] == "0")
    {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << nums[i];
    }
    cout << "\n";

    return 0;
}