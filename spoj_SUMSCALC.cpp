#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	ll n,sum,s1,s2,s3,s4;
    cin >> n;
    sum=n*(n+1)/2;
    s1=2*sum;
    s2=n*n;
    s3=n*(n+1)*(2*n+1)/6;
    s4=(n*(n+1)/2)*(n*(n+1)/2);
    cout << sum << " " << s1 << " " << s2 << " " << s3 << " " << s4 << "\n";
}

khela_shuru
{
	int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
	gelo;
}