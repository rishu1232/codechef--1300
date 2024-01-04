#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,c;
        cin >> n >> x >> c;
        int arr[n];
        int count = 0;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++){
            if(ceil((x-arr[i])) > c) {
                arr[i] = x;
                count++;
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++) sum+=arr[i]; 
        cout << sum - (count * c) << endl;
    }
    return 0;
}
