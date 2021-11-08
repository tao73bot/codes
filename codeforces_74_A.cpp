#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,a,i,j,mx=-1*1e9+7,sum;
	string s,name;
	cin >> n;
	for(i=0;i<n;i++){
		sum=0;
		cin >> s;
		cin >> a; 
		sum+=(a*100);
		cin >> a;
		sum-=(a*50);
		for(j=0;j<5;j++){
			cin >> a;
			sum+=a;
		}
		if(sum>mx){
			name=s;
			mx=sum;
		}
	}
	cout << name << "\n";
	return 0;
}