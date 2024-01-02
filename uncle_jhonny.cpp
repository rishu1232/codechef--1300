#include <bits/stdc++.h>
using namespace std;

int jhonnysins(int n, int arr[], int k){
    int count=arr[k-1];
    sort(arr , arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]==count) count = i;
    }
     return count + 1;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    int k;
	    cin >> k;
	    int s = jhonnysins(n , arr, k);
	    cout << s << endl;
	}
}
