#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum  = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]>=48 && s[i]<=57) {
                int k = s[i] - '0';
                sum += k;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
