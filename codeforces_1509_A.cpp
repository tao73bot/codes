#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
int main()
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		int a[n];
		vector<int> b,c;
		for(i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%2==0) b.push_back(a[i]);
			if(a[i]%2==1) c.push_back(a[i]);
		}
		for(i=0;i<b.size();i++){
			cout << b[i] << " ";
		}
		for(i=0;i<c.size();i++){
			cout << c[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}