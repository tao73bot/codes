#include <bits/stdc++.h>
using namespace std;

void solve(long long  n,long long d)
{
    long long x,a,b,c=0;
    x=n;
    if(x>=d*10){
        c=1;
    }
    if(c==0){
        while(x>=d)
        {
            if(x%d==0){
                c=1;
                break;
            }
            x-=10;
        }
    }
    if(c){
        cout << "YES\n";
    }
    else{{
        cout << "NO\n";
    }}
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,d,i,cnt=0,ans=0;
        cin >> n >> d;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            solve(a[i],d);
        }
    }
    return 0;
}