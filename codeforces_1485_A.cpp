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
        long long a,b,ans=33,i,cnt,d;
        cin >> a >> b;
        
        for(i=0;i*i<=a;i++){
            if(b==1&&i==0) continue;
            cnt=i;
            d=a;
            while(d!=0){
                d/=(b+i);
                cnt++;
            }
            ans=min(ans,cnt);
        }
        cout << ans << "\n";
    }
    return 0;
}