#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

vector<long long> p;
void prime_factors(long long n) {
	while(n%2==0){
		p.push_back(2);
		n/=2;
	}
	for(int i=3; i*i<n; i+=2)
		while(n%i==0) {
			p.push_back(i);
			n/=i;
		}
	if(n!=1)
		p.push_back(n);
}

int main()
{
    SIS;
    long long n,i,a=1,ans=1;
    for(i=0;i<10;i++){
        cin >> n;
        prime_factors(n);
    }
    sort(p.begin(),p.end());
    if(p.size()!=0)
    {
        n=p[0];
        for(i=1;i<p.size();i++){
            if(n==p[i]) a++;
            else{
                ans*=(a+1);
                a=1;
                n=p[i];
            }
        }
        if(n==p.back()) ans*=(a+1);
        cout << ans%10 << "\n";
    }
    else cout << "1\n";
    return 0;
}