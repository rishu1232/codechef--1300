#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    long long n;
    string s;
    cin >> n >> s;

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '0') count++;
    }

    cout << count << endl;
    }
    return 0;
}
