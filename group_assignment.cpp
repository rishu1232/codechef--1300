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
        int maxElement = *max_element(arr, arr + n);
        int hash[maxElement + 1] = {0};

        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (  hash[arr[i]] % arr[i] != 0) {
                flag = false;
                break; 
            }
            else if(arr[i]>hash[arr[i]]){
            	flag = false;
            	break;
			}
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
