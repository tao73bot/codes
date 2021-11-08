#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,k,p,mn,mx;
		cin >> a >> k;
		while(k!=1)
		{
			p=a;
			mn=9,mx=0;
			while(p!=0)
			{
				mn=min(mn,p%10);
				mx=max(mx,p%10);
				p/=10;
			}
			if(mn*mx==0) break;
			a+=(mn*mx);
			k--;
		}
		cout << a << "\n";
	}
	return 0;
}