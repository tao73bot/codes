#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n;
	cin >> n;
	set<int> s;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		if(x<=n) s.insert(x);
	}
	cout << n-s.size() << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}