#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, b, m;
        cin >> n >> b >> m;
        long long t = 0;
        long long k = 0;
        while (n > 0) {
           if(n%2!=0) k = (n + 1) / 2;
           else k = n/2;
            t += k * m;
            t += b;
            n -= k;
            m *= 2;
        }

        cout << t - b << endl;
    }
    return 0;
}
