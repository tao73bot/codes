#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n,s;
		cin >> n >>s;
		if(n>=s) cout << s << "\n";
		else cout << abs(n-(s-n)) << "\n";
	}
	return 0;
}