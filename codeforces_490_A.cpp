#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	int n,i,a=0,b=0,c=0,mn,cnt;
	cin >> n;
	int x[n];
	vector<int> aa,bb,cc;
	for(i=0;i<n;i++){
		cin >> x[i];
		if(x[i]==1){
			a++;
			aa.push_back(i+1);
		}
		if(x[i]==2){
			b++;
			bb.push_back(i+1);
		}
		if(x[i]==3){
			c++;
			cc.push_back(i+1);
		}
	}
	mn=min(a,b);
	mn=min(mn,c);
	cout << mn << "\n";
	for(i=0;i<mn;i++){
		cout << aa[i] << " " << bb[i] << " " << cc[i] << "\n";
	}
}

khela_shuru
{       
    SIS;
	solve();
	gelo;
}