#include <bits/stdc++.h>
using namespace std;

int power(int a,int x)
{
    int p=1;
    for(int i=0;i<x;i++){
        p*=a;
    }
    return p;
}

int digit_sum(int n)
{
    int sum=0;
    while (n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int n;
int way[38];
int main()
{
    int i,s,ans=0;
    cin >> n;
    for(i=0;i<power(10,n/2);i++){
        s = digit_sum(i);
        way[s]++;
    }
    for(i=0;i<power(10,n/2);i++){
        s = digit_sum(i);
        ans += way[s];
    }

    cout << ans << endl;

    return 0;
}