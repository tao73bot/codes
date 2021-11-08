#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

long long gcd(long long a, long long b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}

void div(long long n)
{
	long long i;
	for(i=1;i*i<=n;i++){
		if(n%i==0&&i*i!=n){
			if(gcd(i,n/i)==1){
				v.push_back(i);
				v.push_back(n/i);
			}
		}
	}
}

int main()
{
	long long n,mn=1000000000000;
	cin >> n;
	if(n==1){
		cout << "1 1\n";
	}
	else{
		div(n);
		for(long long i=1;i<=v.size();i+=2){
			mn=min(v[i],mn);
		}
		cout << n/mn << " " << mn << "\n";
	}
	return 0;
}