#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long n;
	    cin >> n;
	    long arr[n];
	    for(long i=0; i<n; i++) cin >> arr[i];
	    long strings = 0;
	    for(long i=1; i<n; i++){
	        strings+=abs(arr[i] - arr[i-1]) - 1;
	    }
	    cout << strings << endl;
	}
return 0;
}
