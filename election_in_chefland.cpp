#include <bits/stdc++.h>
using namespace std;

void electiontime(int a, int b, int c){
    if(a > 50) cout << "A" << endl;
    if(b > 50) cout << "B" << endl;
    if(c > 50) cout << "C" << endl;
    if(a <= 50 && b <= 50 && c <= 50) cout << "NOTA" << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    electiontime(a , b , c);
   }

return 0;
}
