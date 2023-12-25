#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                a++;
            } else {
                b++;
            }
        }

        if (a > b) {
            cout << n - a + 1 << endl;
        }
         else if(a==n ) cout << 1 << endl;
           
           else if(b==n) cout << 0 << endl; 
         else if (a == b) {
            cout << n - a << endl;
        } else {
            cout << n - b << endl;
        }
        ;
    }

    return 0;
}

