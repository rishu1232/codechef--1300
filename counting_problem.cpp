#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count1=0 ;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    for(int i=0; i<n; i++) {
	        if(arr[i]%2 != 0) count1++;
	    }
	    if(count1%2 == 0) cout << "yes" << endl;
	    else cout << "no" << endl;
	}
	return 0;
}
