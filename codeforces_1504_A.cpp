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
		int n,i,cnt=0,x=0;
		string s,s1;
		cin >> s;
		n=s.size();
		for(i=0;i<n;i++){
			if(s[i]=='a') cnt++;
		}
		if(cnt==n){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			s1=s;
			reverse(s1.begin(),s1.end());
			if(s==s1){
				cout << "a" << s;
			}
			else{
				for(i=0;i<n;i++){
					if(s[n-i-1]!='a'&&x==0){
						cout << "a";
						x++;
					}
					cout << s[i];
				}
			}
			cout << "\n";
		}
	}
	gelo;
}