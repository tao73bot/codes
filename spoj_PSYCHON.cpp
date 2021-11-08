#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()

#define MX 1000006
vector<long long> primes;
vector<bool> mark(1000007,false);

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
    SIS;
    sieve();
    int t;
    //scanf("%d",&t);
    cin >> t;
    while(t--)
    {
        long long n;
        //scanf("%lld",&n);
        cin >> n;
        int cnt=0,a=0,b=0,i;

        for(i=0;primes[i]*primes[i]<=n;i++){
            if(n%primes[i]==0){
                while(n%primes[i]==0){
                    cnt++;
                    n/=primes[i];
                }
                if(cnt%2==0&&cnt>0){
                    a++;
                }
                else{
                    b++;
                }
                cnt=0;
            }
        }
        if(n>1){
            b++;
        }
        if(a>b){
            //printf("Psycho Number\n");
            cout << "Psycho Number\n";
        }
        else{
            //printf("Ordinary Number\n");
            cout << "Ordinary Number\n";
        }
    }
    return 0;
}