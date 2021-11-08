#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n,s,x,ans;
		cin >> n >>s;
		x=n*(n+1)/2;
		if(x<=s) cout << "-1\n";
		else{
			if(x-s>n) cout << "-1\n";
			else cout << x-s << "\n";
		}
	}
	return 0;
}