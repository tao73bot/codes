#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define endl '\n'

int main()
{
    SIS;
    long long n,k,c;

    while (scanf("%lld %lld",&n,&k)!=EOF)
    {
        c = n + (n-1)/(k-1);

        printf("%lld\n",c);
    }
    
    return 0;
}