#include <bits/stdc++.h>
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
	int i,j;
	int a[4][4],b[4][4];

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]!=0){
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i+1][j]+=a[i][j];
			}
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(b[i][j]%2!=0) cout << "0";
			else cout << "1";
		}
		cout << "\n";
	}
	return 0;
}