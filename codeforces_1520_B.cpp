#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
 
int siz(int n)
{
	int d=0;
	while(n>0){
		d++;
		n/=10;
	}
	return d;
}
int kop(int x)
{
	int p=1,a;
	for(a=1;a<x;a++){
		p+=pow(10,a);
	}
	return p;
}
void solve()
{
	ll n,i,x;
	cin >> n;
	i=siz(n);
	x=kop(i)/10;
	cout << (n/kop(i))+(i-1)*9 << "\n";
}
 
khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	gelo;
}