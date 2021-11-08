#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,ans=0,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=n-2;i>=0;i--){
        cnt+=(s[i]-'0');
        if(s[i]!='0') ans++;
    }
    ans+=(s[n-1]-'0');
    cout << ans+cnt << "\n";
}

khela_shuru
{
	SIS;
	int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
	gelo;
}