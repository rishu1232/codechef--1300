#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n=0;
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '<' && s[i+1] == '>')
		{
			n++;
		}
	}
	cout << n << endl;
}
   return 0;

}
