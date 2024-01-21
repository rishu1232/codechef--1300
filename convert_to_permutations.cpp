#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        long long sum = 0;
        for(int i=0; i<n; i++) sum+=arr[i];
        
        long long k = sum / (n+1);
        for(int i=0; i<n; i++) arr[i] = arr[i] - k;
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
