#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<char> s(n,0);
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) {
            if(a[i]%k==0) s[i] = '1';
            else s[i] = '0';
        }
        
        for(auto i : s){
            cout << i;
        }
       cout << endl;
    }
    return 0;
}
