#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,c;
	    string s;
	    cin >> n >> s;
	    string ans = "YES";
	    if(n%2 != 0) ans = "NO";
	    else{
	   for(int i=0; i<n; i++){
	     c = count(s.begin(), s.end(), s[i]);
	       if(c%2 != 0){
	           ans = "NO";
	           break;
	   }
	   
	}

}

	cout << ans << endl;
	
	}
	return 0;
}
	
	
