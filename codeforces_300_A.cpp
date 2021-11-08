#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long
vector<int> v1,v2,v3; 
void solve()
{
	int n,i,p=0,m=0,z=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]<0) m++;
		if(a[i]>0) p++;
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(m%2==0&&p>0){
			if(i+1<m) v1.push_back(a[i]);
			if(a[i]<=0&&i>=m-1) v3.push_back(a[i]);
			if(a[i]>0) v2.push_back(a[i]);
		}
		if(m%2==0&&p==0){
			if(i+3<m) v1.push_back(a[i]);
			if(a[i]==0||(i==m-3)) v3.push_back(a[i]);
			if(a[i]!=0&&(i+2>=m)) v2.push_back(a[i]);
		}
		if(m%2==1&&p==0){
			if(i+2<m) v1.push_back(a[i]);
			if(a[i]==0) v3.push_back(a[i]);
			if(a[i]!=0&&i+2>=m) v2.push_back(a[i]);
		}
		if(m%2==1&&p>0){
			if(i<m) v1.push_back(a[i]);
			if(a[i]==0) v3.push_back(a[i]);
			if(a[i]>0) v2.push_back(a[i]);
		}
	}
	cout << v1.size() << " ";
	for(i=0;i<v1.size();i++){
		cout << v1[i] << " ";
	}
	cout << "\n";
	cout << v2.size() << " ";
	for(i=0;i<v2.size();i++){
		cout << v2[i] << " ";
	}
	cout << "\n";
	cout << v3.size() << " ";
	for(i=0;i<v3.size();i++){
		cout << v3[i] << " ";
	}
	cout << "\n";
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}