#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

set<ll> prime;
vector<bool> mark(1000006,false);

void sieve()
{
    long long i,j,limit = sqrt(1000006)+2;
    mark[1]=true;

    for(i=4;i<=1000006;i+=2){
        mark[i]=true;
    }
    prime.insert(4);

    for(i=3;i<=1000006;i+=2){
        if(i<=limit){
            for(j=i*i;j<=1000006;j+=2*i){
                mark[j]=true;
            }
        }
        if(!mark[i])
        {
            prime.insert(i*i);
        }
    }
}

khela_shuru
{
    sieve();
	SIS;
	int t;
	cin >> t;
    while(t--)
	{
	 	ll n;
        cin >> n;
        if(prime.count(n)==1){
            cout << "YES\n";
        }
        else cout << "NO\n";
	}
	gelo;
}