#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,i,j;
		cin >> n;
		if(n==2){
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cout << "-1 ";
				}
				cout << "\n";
			}
		}
		else{
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(i==j) cout << "-1 ";
					else cout << "1 ";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}