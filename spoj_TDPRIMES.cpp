#include<bits/stdc++.h>
using namespace std;

#define MX 100000006
vector<long long> primes;
vector<bool> mark(100000007,false);

void sieve()
{
    long long i,j,limit = sqrt(MX)+2;
    mark[1]=true;

    for(i=4;i<=MX;i+=2){
        mark[i]=true;
    }
    //prime[nprime++]=2;
    primes.push_back(2);

    for(i=3;i<=MX;i+=2){
        if(i<=limit){
            for(j=i*i;j<=MX;j+=2*i){
                mark[j]=true;
            }
        }
        if(!mark[i])
        {
            //prime[nprime++]=i;
            primes.push_back(i);
        }
    }
}

int main()
{
    sieve();
    for(int i=0;i<5761455;i+=100){
        cout << primes[i] << endl;
    }
    return 0;
}