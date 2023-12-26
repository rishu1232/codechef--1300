#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	string s1 , s2;
	cin >> s1 >> s2;
	if(count(s1.begin() , s1.end() , '1' ) == count(s2.begin() , s2.end() , '1' )) cout << "yes" << endl;
	else cout << "no" << endl;
	
}
	return 0;
}
