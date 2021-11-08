#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int n,i,l;
		int a[10]={0,0,0,0,0,0,0,0,0,0};
		cin >> n;

		for(i=1;i<=n;i++){
			ostringstream s1;
			s1 << i;
			s+=s1.str();
		}
		l=s.size();
		for(i=0;i<l;i++){
			if(s[i]=='0') a[0]++;
			if(s[i]=='1') a[1]++;
			if(s[i]=='2') a[2]++;
			if(s[i]=='3') a[3]++;
			if(s[i]=='4') a[4]++;
			if(s[i]=='5') a[5]++;
			if(s[i]=='6') a[6]++;
			if(s[i]=='7') a[7]++;
			if(s[i]=='8') a[8]++;
			if(s[i]=='9') a[9]++;
		}

		for(i=0;i<9;i++){
			cout << a[i] << " ";
		}
		cout << a[9] << "\n";
	}
	gelo;
}