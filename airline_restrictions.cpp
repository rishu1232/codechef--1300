#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		if(a+b <= d && c <= e) cout << "yes" << endl;
		else if(b+c <= d && a <= e) cout << "yes" << endl;
		else if(a+c <= d && b <= e) cout << "yes" << endl;
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
