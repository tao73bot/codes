#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,cnt=0;
		string a,b,c;
		cin >> a >> b >> c;
		n=a.size();

		for(i=0;i<n;i++){
			if((a[i]==c[i])||(b[i]==c[i])) cnt++;
		}
		if(cnt==n){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}