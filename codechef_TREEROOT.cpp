#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,a=0,b=0;
    cin >> n;
    while(n--){
        int x,s;
        cin >> x >> s;
        a+=x;
        b+=s;
    }
    cout << a-b << "\n";
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