#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()

void solve()
{
	long long n,i,f=1,j,k,mx=1;
	cin >> n;
	long long a[n],b[n],c[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<long long>());
	j=k=0;
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]) f++;
		if(a[i]!=a[i+1]) f=1;
		if(f>mx) mx=f;
	}
	for(i=0;i<n-1;){
		if(a[i]==a[i+1]){
			b[j]=a[i];
			c[k]=a[i];
			j++;
			k++;
			i+=2;
		}
		else{
			b[j]=a[i];
			i++;
			j++;
		}
		if(mx<f) mx=f;
	}
	if(i==n-1){
		b[j]=a[n-1];
		j++;
	}
	if(mx>=3){
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
		cout << k << "\n";
		for(i=k-1;i>=0;i--){
			cout << c[i] << " ";
		}
		cout << "\n";
		cout << j << "\n";
		for(i=0;i<j;i++){
			cout << b[i] << " ";
		}
		cout << "\n";
	}
}

khela_shuru
{
	SIS;
	solve();
	gelo;
}