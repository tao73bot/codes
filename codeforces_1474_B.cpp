#include <bits/stdc++.h>
using namespace std;

vector<long long> prime;
vector<bool> mark(1000001,false);

void sieve()
{
    long long i,j,limit = sqrt(1000001)+2;
    mark[1]=true;

    for(i=4;i<=1000001;i+=2){
        mark[i]=true;
    }
    //prime[nprime++]=2;
    prime.push_back(2);

    for(i=3;i<=1000001;i+=2){
        if(i<=limit){
            for(j=i*i;j<=1000001;j+=2*i){
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,l;
    l=prime.size();
    cin >> t;
    while(t--)
    {
        long long d,a,b,i,f=0,x=1;
        cin >> d;
        for(i=0;i<l;i++){
            if(prime[i]-x>=d&&f==0){
                a=prime[i];
                x=a;
                f++;
            }
            if(prime[i]-x>=d&&f==1){
                b=prime[i];
                f++;
            }
            if(f==2) break;
        }
        cout << a*b << "\n";
    }
    return 0;
}