//# codechef--1300
//contains solution of problems of codechef with range of difficulty from 1000 - 1300.
#include <iostream>
#include <string>
using namespace std;

void encodeMessage(string& message) {
    
    for (int i = 0; i + 1 < message.size(); i += 2) {
        swap(message[i], message[i + 1]);
    }

    
    for (char& ch : message) {
        if (isalpha(ch)) {
            ch = 'a' + ('z' - tolower(ch));
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string message;
        cin >> message;

        encodeMessage(message);
        cout << message << endl;
    }

    return 0;
}
