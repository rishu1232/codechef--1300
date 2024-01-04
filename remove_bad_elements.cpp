#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        int maxi = *max_element(arr, arr + n);
        vector<int> hash(maxi + 1, 0);

        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        
        int maxCount = *max_element(hash.begin(), hash.end());
        cout << n - maxCount << endl;
    }
    return 0;
}
