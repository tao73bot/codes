#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

ll gcd(ll a, ll b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}

ll sum(ll n)
{
	ll s=0;
	while(n!=0)
	{
		s+=(n%10);
		n/=10;
	}
	return s;
}


khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,a,i,b;
		cin >> n;

		for(i=n;;i++){
			a=sum(i);
			b=gcd(i,a);
			if(b>1){
				cout << i << "\n";
				break;
			}
		}
	}
	gelo;
}