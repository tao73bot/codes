#include <bits/stdc++.h>
using namespace std;

int prime[3000000], n_prime;

int mark[1000002];

int sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;

    mark[1]=1;

    for(i=4;i<=n;i+=2) mark[i]=1;
    prime[n_prime++]=2;

    for(i=3;i<=n;i+=2){
        if(!mark[i]){
            prime[n_prime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j+=i*2){
                    mark[j]=1;
                }
            }
        }
    }
}

long long power(int a,int x)
{
    int p=1;
    for(int i=0;i<x;i++){
        p*=a;
    }
    return p;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i;
        long long ans=1;
        cin >> n;
        long long mod=1000000007;
        for(i=1;i<=n;i++){
            if(1==sieve(i)){
                ans+=1;
            }
            else{
                ans+=(power(2,i))%mod;
            }
        }
        cout << ans << endl;
    }

    return 0;
}