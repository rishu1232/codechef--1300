#include<bits/stdc++.h>
using namespace std;

void candies(int a, int b){		
	int count = 1;
	int bob = 0, limak = 0;
	while(limak <= a || bob <= b){
		limak += count;
		if(limak > a) {
			cout << "Bob " << endl;
			break;
		}
		
		count++;
		bob+= count;
		if(bob > b) {
			cout << "Limak " << endl;
			break;
		}
		count++;
	}
}


int main()
{
	int t;
	cin >> t;
	while(t-- ){
	int a , b;
	cin >> a >> b;
	candies(a , b);
}
return 0;

}
