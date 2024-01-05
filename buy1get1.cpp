#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        unordered_map<char, int> hash;
        for (int i = 0; i < s.length(); i++) {
            hash[s[i]]++;
        }
        int count = 0;
        for (auto& it : hash) {
            count += it.second / 2;
            if (it.second % 2 != 0) {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
