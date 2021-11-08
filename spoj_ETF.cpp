#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

// int gcd(int a,int b)
// {
// 	if(a%b==0) return b;
// 	else return gcd(b,a%b);
// }

// int phi(int n)
// {
// 	int result=1;
// 	for(int i=2;i<n;i++){
// 		if(gcd(i,n)==1) result++;
// 	}
// 	return result;
// }

int phi(int n)
{
	float result =n;
	for(int p=2;p*p<=n;p++){
		if(n%p==0){
			while(n%p==0){
				n/=p;
			}
			result*=(1.0-(1.0/(float)p));
		}
	}
	if(n>1){
		result *=(1.0-(1.0/(float)n));
	}
	return (int)result;
}

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << phi(n) << "\n";
	}
	gelo;
}