#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    string result = "";
    result.reserve(s.size());

    for (int i = 0; i < 26; i++) {
        result.append(freq[i], 'a' + i);
    }

    cout << result << "\n";

    return 0;
}