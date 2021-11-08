#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,d,a,b,c,ans=0;
        a=b=c=0;
        cin >> n;
        d=n/3;
        int aa[n];
        for(i=0;i<n;i++){
            cin >> aa[i];
            if(aa[i]%3==0) a++;
            if(aa[i]%3==1) b++;
            if(aa[i]%3==2) c++;
        }
        for(i=0;i<2;i++){
            if(a>d){
                ans+=(a-d);
                b+=(a-d);
                a=d;
            }
            if(b>d){
                ans+=(b-d);
                c+=(b-d);
                b=d;
            }
            if(c>d){
                ans+=(c-d);
                a+=(c-d);
                c=d;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}