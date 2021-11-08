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

int main()
{
    int n,mx,i,s1=0,s2=0,d,ans=10,k;
    cin >> n;
    mx = power(10,n)-1;
    cout << mx <<"\n";
    for(i=1000;i<=mx;i++){
        d = floor(log10(i))+1;
        k=i;
        while (k==(i/power(10,d/2)))
        {
            s1+=(k%10);
            k/=10;
        }
        int m=k;
        while (m!=0)
        {
            s2+=(m%10);
            m/=10;
        }
        if(s1==s2){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}