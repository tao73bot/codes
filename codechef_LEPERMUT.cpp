#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

void solve()
{
	int n,i,j,cnt1=0,cnt2=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]) cnt1++;
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]) cnt2++;
        }
    }
    cout << (cnt1==cnt2 ? "YES\n" : "NO\n");
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