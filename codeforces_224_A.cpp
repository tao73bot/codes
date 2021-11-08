#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	ll a,b,c,x,ans;
    cin >> a >> b >> c;
    x=2*(a+b+c)+(a*b/c)+(a*c/b)+(b*c/a);
    ans=sqrt(x);
    cout << 4*ans << "\n";
	gelo;
}