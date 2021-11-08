#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()
vector<int >v;

void solve()
{
    int i,a;
    for(i=1;i<=1000;i++){
        a=i*i;
        v.push_back(a);
    }
}

khela_shuru
{
    solve();
	SIS;
    int t;
    cin >> t;
    while(t--)
    {
        int i,x;
        for(i=0;i<v.size();i++){
            cout << v[i] << "\n";
            cout.flush();
            cin >> x;
            if(x==1) break;
        }
        cout.flush();
    }
	gelo;
}