#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
 
void solve()
{
	ll n,i,mn=0,sum=0,cnt=0;
	cin >> n;
	priority_queue<int, vector<int>,greater<int>> x;
	ll a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		sum+=a[i];
		cnt++;
		x.push(a[i]);
		while(sum<0){
			sum-=x.top();
			x.pop();
			cnt--;
		}
	}
	cout << cnt << "\n";
}
 
khela_shuru
{
	SIS;
	solve();
	gelo;
}