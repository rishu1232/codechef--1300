#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int maxVal = -1;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxVal = max(arr[i], maxVal);
        }

        vector<int> freq(maxVal + 1, 0);
        int maxFreq = 0;

        for (int i = 0; i < n; i++) {
            maxFreq = max(maxFreq, ++freq[arr[i]]);
        }

        cout << n - maxFreq << endl;
    }

    return 0;
}

