#include <bits/stdc++.h>
using namespace std;

vector<long long> prime;
vector<bool> mark(100025,false);

void sieve()
{
    long long i,j,limit = sqrt(100025)+2;
    mark[1]=true;

    for(i=4;i<=100025;i+=2){
        mark[i]=true;
    }
    //prime[nprime++]=2;
    prime.push_back(2*2);

    for(i=3;i<=100025;i+=2){
        if(i<=limit){
            for(j=i*i;j<=100025;j+=2*i){
                mark[j]=true;
            }
        }
        if(!mark[i])
        {
            //prime[nprime++]=i;
            prime.push_back(i*i);
        }
    }
}

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,k;
        scanf("%lld %lld",&n,&k);

        int cnt = (int)(upper_bound(prime.begin(), prime.end(), n) - prime.begin());
        int ans = cnt - (int)(upper_bound(prime.begin(), prime.end(), k) - prime.begin());
        if(ans < 0) ans=0;
        printf("%d %d\n",cnt,ans);
    }

    return 0;
}