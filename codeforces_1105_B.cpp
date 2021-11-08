#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

int a[27];

khela_shuru
{
	SIS;
	int n,k,x=0,i,cnt;
	cin >> n >> k;
	string s;
	cin >> s;
	for(i=0;i<n;i++){
		cnt=1;
		while(cnt<k&&s[i]==s[i+1]){
			cnt++;
			i++;
		}
		if(cnt==k){
			a[s[i]-'a']++;
		}
	}
	for(i=0;i<26;i++){
		if(x<a[i]){
			x=a[i];
		}
	}
	cout << x << "\n";
	gelo;
}