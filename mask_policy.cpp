#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	 int a,n;
	 cin >> n >> a;
	 if(a <= n/2) cout << a << endl;
	 else {
	     cout << n - a << endl;
	}

}
return 0;
}

