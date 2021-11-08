#include <bits/stdc++.h>
using namespace std;
 
vector<long long> prime;
vector<bool> mark(86028123,false);
 
void sieve()
{
    long long i,j,limit = sqrt(86028123)+2;
    mark[1]=true;
 
    for(i=4;i<=86028123;i+=2){
        mark[i]=true;
    }
    //prime[nprime++]=2;
    prime.push_back(2);
 
    for(i=3;i<=86028123;i+=2){
        if(i<=limit){
            for(j=i*i;j<=86028123;j+=2*i){
                mark[j]=true;
            }
        }
        if(!mark[i])
        {
            //prime[nprime++]=i;
            prime.push_back(i);
        }
    }
}
 
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
 
        printf("%lld\n",prime[n-1]);
    }
 
    return 0;
}